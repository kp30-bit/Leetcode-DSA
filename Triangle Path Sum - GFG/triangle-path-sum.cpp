//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(vector<vector<int>>&triangle,vector<vector<int>>&dp,int row,int col,int n,int m){
        if(row==n-1) return triangle[row][col];
        // if(row>n-1 || col>row+1) return 1e9;
        if(dp[row][col]!=-1) return dp[row][col];
        int down=solve(triangle,dp,row+1,col,n,m)+triangle[row][col];
        int diag=solve(triangle,dp,row+1,col+1,n,m)+triangle[row][col];
        return dp[row][col]=min(down,diag);
    }
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
  
        int m=triangle[n-1].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(triangle,dp,0,0,n,m);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends