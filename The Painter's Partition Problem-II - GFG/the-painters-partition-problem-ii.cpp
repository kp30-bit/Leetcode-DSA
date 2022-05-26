// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    long long int paintersfunc(int arr[],int n,long long int limit)
    {
        long long int sum=0, painters=1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>limit)
            {
                painters++;
                sum=arr[i];
            }
        }
        return painters;
    }
    long long minTime(int arr[], int n, int m)
    {
        // code here
        // return minimum time
        long long int k=0,totallength=0;
        for(int i=0;i<n;i++)
        {
            totallength+=arr[i];
            if(arr[i]>k) k=arr[i];
            //k=max(k,arr[i]);
        }
        long long int low=k,high=totallength;
        while(low<high){
            long long int mid=(low+high)/2;
            long long int painters=paintersfunc(arr,n,mid);
            if(painters<=m)
            {
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends