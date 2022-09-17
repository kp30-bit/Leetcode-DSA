class Solution {
public:
    
    
    // bool check(int start,int end, const string &s)
    // {
    //     while(start<=end)
    //     {
    //         if(s[start++]!=s[end--]) return false;
    //     }
    //     return true;
    // }
    bool isPalindrome(const string& s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }

//     void solve(string &s,int ind,vector<vector<string>>&ans,vector<string>&temp,int n)
//     {
//         if(ind==n){
//             ans.push_back(temp);
//             return;
//         }
        
//         for(int i=ind;i<n;++i)
//         {
//             if(check(ind,i,s))
//             {
//                 temp.push_back(s.substr(ind,i-ind+1));
//                 solve(s,ind+1,ans,temp,n);
//                 temp.pop_back();
//             }
//         }
        
//     }
    
    
    
    void dfs(int index, string& s, vector<string>& path, vector<vector<string> >& ret) {
        if(index == s.size()) {
            ret.push_back(path);
            return;
        }
        for(int i = index; i < s.size(); ++i) {
            if(isPalindrome(s, index, i)) {
                path.push_back(s.substr(index, i - index + 1));
                dfs(i+1, s, path, ret);
                path.pop_back();
            }
        }
    }
    
    
    // vector<vector<string>> partition(string s) {
    //     vector<vector<string>>ans;
    //     if(s.empty()) return ans;
    //     vector<string>temp;
    //     solve(s,0,ans,temp,s.size());
    //     return ans;
    // }
    
    
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string> > ret;
        if(s.empty()) return ret;
        
        vector<string> path;
        dfs(0, s, path, ret);
        
        return ret;
    }
    
};
    
    