class Solution {
public:
    
    void solve(int ind,vector<vector<int>>&ans,vector<int>nums,vector<int>temp)
    {
        if(ind>=nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        solve(ind+1,ans,nums,temp);
        temp.pop_back();
        solve(ind+1,ans,nums,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,ans,nums,temp);
        return ans;
    }
};