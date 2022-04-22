class Solution {
public:

   
    bool canPartition(vector<int>& arr) {
        
        
        // int N=arr.size();
        // int sum=0;
        // // if(N==0) return 1;
        // // if(N<=0 && sum>0) return 0;
        // for(int i=0;i<N;i++)
        // {
        //     sum+=arr[i];
        // }
        // if(sum % 2!=0) return 0;
        // sum=sum/2;
        // bool t[N+1][sum+1];
        // for(int i=0;i<=N;i++){
        //     t[i][0]=true;
        // }
        // for(int j=1;j<=sum;j++)
        // {
        //     t[0][j]=false;
        // }
        // for(int i=1;i<=N;i++)
        // {
        //     for(int j=1;j<=sum;j++)
        //     {
        //         if(j>=arr[i-1])
        //         {
        //             t[i][j]=(t[i-1][j] || t[i-1][j-arr[i-1]]);
        //         }
        //         else{
        //             t[i][j]=t[i-1][j];
        //         }
        //     }
        // }
        // return t[N][sum];
        
        
        int n=arr.size(),sum=0;
        if(n==0) return 0;
        if(n<=0 || sum>0) return 0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
         bool dp[n+1][sum+1];
        if(sum%2!=0) return false;
        sum=sum/2;
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        for(int j=1;j<=sum;j++)
        {
            dp[0][j]=false;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
            }
        }
        return dp[n][sum];
    }
};