//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long l=0,r=n-1;
        int ans=-1,ansindex=0,flag=0;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(v[m]==x)
            {
                return m;
            }
            else if(v[m]>x)
            {
                r=m-1;
            }
            else if(v[m]<x)
            {
                flag=1;
                if(v[m]>ans)
                {
                    ans=v[m];
                    ansindex=m;
                }
                l=m+1;
            }
        }
        return flag==1?ansindex:-1;
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends