class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int l=0,n=arr.size();
        // int r=n-1;
        // while(l<=r)
        // {
        //     int m=l+(r-l)/2;
        //     if(arr[m]>arr[m-1] && arr[m]>arr[m+1]) return m;
        //     else if(arr[m]<arr[m+1]){
        //         l=m+1;
        //     }
        //     else r=m;
        // }
        // return -1;
        
        int low = 0, high = arr.size()-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < arr[mid+1])
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
};