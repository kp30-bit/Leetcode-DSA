class Solution {
public:
    int findMin(vector<int>& A) {
        int n=A.size();
        int lo=0,hi=n-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(A[mid]>A[hi]) lo=mid+1;
            else hi=mid;
        }
        return A[lo];
    }
    
   
};