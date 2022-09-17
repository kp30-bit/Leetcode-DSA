class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        if(nums.size()==0) return -1;
        if(nums[0]>nums[1]) return 0;
        int n=nums.size();
        
        if(nums[n-1]>nums[n-2]) return n-1;
        int l=0,r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]>nums[m-1] && nums[m]>nums[m+1]){
                return m;
            }
            
            else if(nums[m]<nums[m+1] && nums[m]>nums[m-1])
            {
                l=m+1;
            }
            else r=m;
        }
        return -1;
    }
};