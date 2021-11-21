class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            m.insert({nums[i],i});
        }
        for(int i=0;i<nums.size();i++)
        {
            auto itr=m.find(nums[i]);
            m.erase(itr);
            auto it=m.find(target-nums[i]);
            if(it!=m.end())
            {
                v.push_back(i);
                v.push_back(it->second);
                break;
            }
        }
        //cout<<v.size()<<endl;
        return v;
    }
};