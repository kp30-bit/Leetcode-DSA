class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,n=nums.size();
        int r=n-1;
        
        if(n==1) return 0;                  
		if(nums[0]> nums[1]) return 0;     
        if(nums[n-1] > nums[n-2]) return n-1;
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
    }
};