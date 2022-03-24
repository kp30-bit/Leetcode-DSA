class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                neg.push_back(nums[i]);
            }
            else if(nums[i]>0) pos.push_back(nums[i]);
            
            
            
        }
        
            vector<int>ans;
            int n=pos.size();
            int i=0;
            while(i<n)
            {
                ans.push_back(pos[i]);
                ans.push_back(neg[i]);
                i++;
            }
        return ans;
    }
};