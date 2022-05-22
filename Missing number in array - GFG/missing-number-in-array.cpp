// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& A, int n) {
        // Your code goes here
        int ans=1; 
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();i++)
        {
            if(A[i]==ans) ans++;
            else if(A[i]>ans && A[i]-ans==1) return ans;
            else if(A[i]>ans && A[i]-ans>1) return ans;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends