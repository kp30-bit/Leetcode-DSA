// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        int count=0,sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<N;i++)
        {
            sum+=Arr[i];
            if(sum==k) count++;
            if(m.find(sum-k)!=m.end())
            {
                count+=m[sum-k];
            }
            m[sum]++;
        }
        return count;
        
        
    }
    //10 2 -2 -20 10
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends