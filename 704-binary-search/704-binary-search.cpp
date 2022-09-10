class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int r=arr.size()-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(arr[m]==target) return m;
            else if(arr[m]<target)
            {
                l=m+1;
            }
            else if(arr[m]>target){
                r=m-1;
            }
        }
        return -1;
    }
};