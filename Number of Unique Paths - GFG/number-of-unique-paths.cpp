//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    
    
    int f(vector<vector<int>>&dp,int r,int c,int a,int b)
    {
        if(r<0 || c<0 || r>=a || c>=b)
        {
            return 0;
        }
        if(r==a-1 && c==b-1) return 1;
        
        if(dp[r][c]!=-1) return dp[r][c];
        int right=f(dp,r,c+1,a,b);
        int down=f(dp,r+1,c,a,b);
        return dp[r][c]=right+down;
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        vector<vector<int>>dp(a,vector<int>(b,-1));
        return f(dp,0,0,a,b);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends