class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        while(l<r)
        {
            int m=l+(r-l)/2;
            int next=(m+1)%n;
            int prev=(m+n-1)%n;
            
            if(nums[m]<nums[next]&&nums[m]<nums[prev]) return nums[m];
            else if(nums[m]<nums[r])
            {
                r=m-1;
            }
            else if(nums[m]>=nums[l])
            {
                l=m+1;
            }
        }
        return nums[l];
    }
    
   
};