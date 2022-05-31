class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0,sum=0;
        unordered_map<int,int>prefsum;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k) count++;
            if(prefsum.find(sum-k)!=prefsum.end())
            {
                count+=prefsum[sum-k];
            }
            prefsum[sum]++;
        }
        return count;
        
    }
};