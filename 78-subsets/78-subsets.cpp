class Solution {
public:
    void solve(int ind,vector<vector<int>>&ans,vector<int>&nums,vector<int>&temp)
    {
        if(ind>=nums.size()){
            ans.push_back(temp);
            return ;
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
    
    
//     void solve(int ind,vector<vector<int>>&ans,vector<int>&nums,vector<int>temp)
//     {
//         if(ind>=nums.size()){
//             ans.push_back(temp);
//             return ;
//         }
        
//         // if(ans.size()==0) ans.push_back(temp);
//         // temp.push_back(nums[ind]);
//         // ans.push_back(temp);
//         // solve(ind+1,ans,nums,n);
//         // ans.pop_back();
//         // solve(ind+1,ans,nums,n);
        
//         solve(ind+1,ans,nums,temp);
//         temp.push_back(nums[i]);
//         solve(ind+1,ans,nums,temp);
//     }
    
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>temp;
//         solve(0,ans,nums,temp);

//         return ans;
//     }
};