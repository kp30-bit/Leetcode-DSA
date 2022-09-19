class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int i=0,j=0;
        int prod=1;
        if(k<=1) return 0;
        while(j<nums.size())
        {
            prod=prod*nums[j];
            while(prod>=k)
            {
                prod/=nums[i];
                i++;
            }
            count+=j-i+1;
            j++;
            
        }
        return count;
    }
};