class Solution {
public:
    
    
    bool check(int start,int end, const string &s)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    

    void solve(string &s,int ind,vector<vector<string>>&ans,vector<string>&temp,int n)
    {
        if(ind==n){
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<n;++i)
        {
            if(check(ind,i,s))
            {
                temp.push_back(s.substr(ind,i-ind+1));
                solve(s,i+1,ans,temp,n);
                temp.pop_back();
            }
        }
        
    }
    
    
    
  
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        if(s.empty()) return ans;
        vector<string>temp;
        solve(s,0,ans,temp,s.size());
        return ans;
    }
    
    
    
    
    
    
};
    
    