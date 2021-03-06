class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,mxsum=0,sum=0;
        unordered_map<int,int>m;
        while(i<n && j<n)
        {
            sum+=nums[j];
            if(m.find(nums[j])==m.end())
            {
                m[nums[j]]++;
                mxsum=max(mxsum,sum);
                j++;
            }
            else if(m.find(nums[j])!=m.end())
            {
                while(m[nums[j]]>0)
                {
                    m[nums[i]]--;
                    if(m[nums[i]]==0) m.erase(nums[i]);
                    sum-=nums[i];
                    i++;
                }
                m[nums[j]]++;
                j++;
            }
            
        }
        return mxsum;
    }
};