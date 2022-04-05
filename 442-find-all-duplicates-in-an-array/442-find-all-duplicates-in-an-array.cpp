class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        auto it=m.begin();
        while(it!=m.end())
        {
            if(it->second==2)
            {
                ans.push_back(it->first);
            }
            it++;
        }
        return ans;
    }
};