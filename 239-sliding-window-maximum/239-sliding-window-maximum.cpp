class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0,j=0,tempmax=INT_MIN;
        vector<int>ans;
        int n=nums.size();
        map<int,int,greater<int>>m;
        while(i<n && j<n)
        {
            m[nums[j]]++;
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                auto it=m.begin();
                int maxx=it->first;
                ans.push_back(maxx);
                m[nums[i]]--;
                if(m[nums[i]]==0) m.erase(nums[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};