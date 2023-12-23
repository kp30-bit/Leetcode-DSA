//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int f(string S1,string S2,int ind1,int ind2,vector<vector<int>>&dp)
    {
        
        if(ind1 < 0 || ind2 < 0) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(S1[ind1]==S2[ind2])
        {
            return dp[ind1][ind2]=f(S1,S2,ind1-1,ind2-1,dp)+1;
        }
        else{
            return max(f(S1,S2,ind1-1,ind2,dp),f(S1,S2,ind1,ind2-1,dp));
            dp[ind1][ind2]=0;
        }
    }
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int ans=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                // if(i==0 || j==0) return dp[i][j]=0;
                if(S1[i-1]==S2[j-1]) {
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(ans,dp[i][j]);
                }
                else dp[i][j]=0;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends