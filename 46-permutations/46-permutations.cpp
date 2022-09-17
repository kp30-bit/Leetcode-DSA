class Solution {
public:
    
    void solve(int ind,vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums,vector<int>&freq)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0){
            temp.push_back(nums[i]);
            freq[i]=1;
            solve(i,ans,temp,nums,freq);
            temp.pop_back();
            freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>freq(nums.size(),0);
        solve(0,ans,temp,nums,freq);
        return ans;
    }
};