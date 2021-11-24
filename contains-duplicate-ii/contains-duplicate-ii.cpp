class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>s;
        int i=0;
        int flag=0;
        int j=0;
        while(j<nums.size())
        {
            if(s.find(nums[j])==s.end())
            {
                s.insert(nums[j]);
                j++;
            }
            else{
                while(nums[i]!=nums[j] || i!=j)
                {
                    if(nums[i]==nums[j])
                    {
                        if(abs(i-j)<=k)
                        {
                            return true;
                        }
                    }
                    //s.erase(nums[i]);
                    i++;
                }
                j++;
            }
        }
        return false;
    }
};