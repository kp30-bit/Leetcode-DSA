//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& nums) {
        // code here
        vector<int>nums2=nums;
        for(int i=0;i<nums.size();i++)
        {
            nums2.push_back(nums[i]);
        }
        stack<int>st;
        vector<int>ans;
        int n=nums.size();
        for(int i= nums2.size()-1;i>=0;i--)
        {
            if(st.size()==0) ans.push_back(-1);
            else if(st.size()>0 && st.top()>nums2[i]) ans.push_back(st.top());
            else if(st.size()>0 && st.top()<=nums2[i]) 
            {
                while(st.size()>0 && st.top()<=nums2[i])
                {
                    st.pop();
                }
                if(st.size()==0) ans.push_back(-1);
                else if(st.top()>nums2[i]) ans.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        reverse(ans.begin(),ans.end());
        ans.resize(n);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends