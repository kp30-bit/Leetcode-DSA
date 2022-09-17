class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(nums.size()==1) return nums[0];
        while(l<r)
        {
            int m=l+(r-l)/2;
            if(nums[l]<nums[r]) return nums[l];
            
            else if(nums[r]<nums[m])
            {
                l=m+1;
            }
            else
            {
                r=m;
            }
        }
        return nums[l];
    }
    
   
};