class Solution {
public:
    
   
    void solve(int ind,vector<vector<int>>&ans,vector<int>&temp,vector<int>nums,int target)
    {
        if(ind==nums.size())
        {
            if(target==0)
            {
                ans.push_back(temp);
                
            }
            return;
        }
        if(nums[ind]<=target)
        {
            temp.push_back(nums[ind]);
            solve(ind,ans,temp,nums,target-nums[ind]);
            temp.pop_back();
        }
        solve(ind+1,ans,temp,nums,target);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        if(nums.size()==0) return {{}};
        solve(0,ans,temp,nums,target);
        return ans;
    }
};