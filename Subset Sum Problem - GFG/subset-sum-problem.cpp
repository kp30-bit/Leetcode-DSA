//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool f(vector<int>&arr,int sum,int ind,vector<vector<int>>&dp)
    {
        if(sum==0) return true;
        if(ind==0) return sum==arr[0];
        if(sum<0) return false;
        if(ind==0 && sum<0) return false;
        
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        
        bool pick=false;
        bool skip=f(arr,sum,ind-1,dp);
        
        if(arr[ind]<=sum) pick=f(arr,sum-arr[ind],ind-1,dp);
        return dp[ind][sum] = pick or skip;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<bool>>dp(n,vector<bool>(sum+1,0));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
        if (arr[0] <= sum) {
            dp[0][arr[0]] = true;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                bool skip=dp[i-1][j];
                bool pick=false;
                if(arr[i]<=j) pick=dp[i-1][j-arr[i]];
                dp[i][j]=pick or skip;
            }
        }
        return dp[n-1][sum];
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends