class Solution {
public:
    int minimumDeletions(string s) {
        // int count=0;
        // stack<char>st;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(st.size()>0 && st.top()>s[i])
        //     {
        //         count++;
        //         st.pop();
        //     }
        //     else{
        //         st.push(s[i]);
        //     }
        // }
        // return count;
        int l=s.size();
        int dp[l+1];
        dp[0]=0;
        int bcount=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a')
            {
                dp[i+1]=min(dp[i]+1,bcount);
            }
            else if(s[i]=='b')
            {
                dp[i+1]=dp[i];
                bcount++;
            }
        }
        return dp[l];
        
    }
};