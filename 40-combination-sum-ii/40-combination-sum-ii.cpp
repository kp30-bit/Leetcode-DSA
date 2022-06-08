class Solution {
public:
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        solve(0,candidates,ans,temp,target);
        return ans;
    }
    void solve( int ind,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&temp,  int target)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }else{
            for(int i=ind;i<candidates.size();i++)
            {
                if(candidates[i]>target) return;
                if( i>ind && candidates[i]==candidates[i-1] ) continue;
               
                temp.push_back(candidates[i]);
                solve(i+1,candidates,ans,temp,target-candidates[i]);
                temp.pop_back();
            }
        }
    }
};