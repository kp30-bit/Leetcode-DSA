//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int K, int n, int prices[]) {
        // code here
        // int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(K+1,0)));
        int profit=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=1;k<K+1;k++)
                {
                    if(j==1)
                    {
                        profit=max((-prices[i]+dp[i+1][0][k]),dp[i+1][1][k]);
                    }
                    else if(j==0)
                    {
                        profit=max((prices[i]+dp[i+1][1][k-1]),dp[i+1][0][k]);
                    }
                    dp[i][j][k]=profit;
                }
            }
        }
        return dp[0][1][K];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends