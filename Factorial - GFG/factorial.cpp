// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
long long int solve(long long int cur,int N)
{
    if(N==0) return cur;
    return solve(cur*N,N-1);
    
}
    long long int factorial(int N){
        //code here
        long long int cur=1;
        return solve(cur,N);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends