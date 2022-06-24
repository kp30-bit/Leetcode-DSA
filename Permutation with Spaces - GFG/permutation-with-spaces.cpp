// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    
    void solve(string ip,string op,vector<string>&v){
        if(ip.length()==0){
           v.push_back(op);
           return;
        } 
        string op1=op;
        string op2=op;
        op1.push_back(' ');
        op1.push_back(ip[0]);
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1,v);
        solve(ip,op2,v);
    }
    
    vector<string> permutation(string S){
        // Code Here
        vector<string>v;
        string ip=S;
        string op;
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op,v);
        return v;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends