class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,result=INT_MIN;
        for(auto i:nums)
        {
            sum=max(sum+i,i);
            result=max(sum,result);
        }
        return result;
    }
};