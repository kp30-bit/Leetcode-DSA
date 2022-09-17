class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target){
                ans[0]=m;
                r=m-1;
            }
            else if(nums[m]>target)
            {
                r=m-1;
            }
            else if(nums[m]<target)
            {
                l=m+1;
            }
        }
        l=0;
        r=nums.size()-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target){
                ans[1]=m;
                l=m+1;
            }
            else if(nums[m]>target)
            {
                r=m-1;
            }
            else if(nums[m]<target)
            {
                l=m+1;
            }
        }
        return ans;
    }
};