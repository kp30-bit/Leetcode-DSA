class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,n=arr.size();
        int r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1]) return m;
            else if(arr[m]>arr[m-1] && arr[m]<arr[m+1]){
                l=m+1;
            }
            else r=m;
        }
        return -1;
    }
};