class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,n=nums.size();
        int r=n-1;
        
        if(n==1) return 0;                  
		if(nums[0]> nums[1]) return 0;     
        if(nums[n-1] > nums[n-2]) return n-1;
        if(nums.size()==1) return 0;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]>nums[m-1] && nums[m]>nums[m+1])
            {
                return m;
            }
            else if(nums[m]>nums[m-1] && nums[m]<nums[m+1])
            {
                l=m+1;
            }
            else 
            {
                r=m;
            }
            
        }
        return -1;
        
        
//         int n = nums.size();
//         if(n==1) return 0;                   \\ single element is always a peak element
// 		if(nums[0]> nums[1]) return 0;     \\ check if first element satisfies the condition
//         if(nums[n-1] > nums[n-2]) return n-1;    \\ check if last element satisfies the condition
        
//         int left=0,right=nums.size()-1;
        
//         while(left<right){
//             int mid = left+(right-left)/2;
//             if(nums[mid]> nums[mid-1] && nums[mid]>nums[mid+1]){    \\check if mid element satisfies the condition
//                 return mid;
//             }
//             if(nums[mid] > nums[mid-1] && nums[mid]<nums[mid+1]){      
//                 left = mid+1;     \\move left to mid+1 as nums[mid+1] > nums[mid], thus our answer  lies on right side
//             }
//             else{
// 				right=mid;         \\ move right to mid as either nums[mid-1] is more than nums[mid] or nums[mid] is more than nums[mid+1] 
//             }
        // }
        // return -1;
    }
};