//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
int f(vector<int>&prices,int ind,int n,vector<vector<vector<int>>>&dp,int cap,int canbuy)
    {
        if(ind==n) return 0;
        if(cap==0) return 0;

        if(dp[ind][canbuy][cap]!=-1) return dp[ind][canbuy][cap];
        int profit=0;
        if(canbuy==1)
        {
            //buy not buy
            profit=max( (-prices[ind]+ f(prices,ind+1,n,dp,cap,0)) , f(prices,ind+1,n,dp,cap,1));
        }
        else if(canbuy==0)
        {
            //sell and not sell
            profit=max((prices[ind]+f(prices,ind+1,n,dp,cap-1,1)),f(prices,ind+1,n,dp,cap,0));
        }
        return dp[ind][canbuy][cap]=profit;
    }

int maxProfit(vector<int>&prices){
    //Write your code here..
    int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        int profit=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=1;k<3;k++)
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
        return dp[0][1][2];
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends