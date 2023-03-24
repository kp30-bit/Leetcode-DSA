//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    //1123344
    //1122344
    //112233455
    //112233488
    //1233
    int findOnce(int arr[], int n)
    {
        //code here.
        if(n==0) return -1;
        if(n==1) return arr[0];
        int l=0,r=n-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(arr[m]!=arr[m+1] && m==0) return arr[0];
            if(arr[m]!=arr[m-1] && m==n-1) return arr[n-1];
            if(arr[m]!=arr[m-1] && arr[m]!=arr[m+1]) return arr[m];
            else if(arr[m]==arr[m-1] && m%2==0)
            {
                r=m-1;
            }
            else if(arr[m]==arr[m-1] && m%2!=0)
            {
                l=m+1;
            }
            else if(arr[m]==arr[m+1] && m%2==0)
            {
                l=m+1;
            }
            else if(arr[m]==arr[m+1] && m%2!=0)
            {
                r=m-1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends