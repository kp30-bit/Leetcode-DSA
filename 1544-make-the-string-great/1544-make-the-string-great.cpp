class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        stack<char>st;
        st.push('-1');
        for(int i=n-1;i>=0;i--)
        {
            if(isupper(s[i]))
            {
                if(st.top()==tolower(s[i]))
                {
                    st.pop();
                    continue;
                }
            }
            if(isupper(st.top())){
                if(s[i]==tolower(st.top()))
                {
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        string ans="";
        while(st.size()>1)
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};