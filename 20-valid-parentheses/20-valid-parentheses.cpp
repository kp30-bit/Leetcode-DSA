class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
                f=1;
            }
            else if(st.size()>0 && s[i]==')')
            {
                if(st.top()!='(')
                {
                    return false;
                    
                }
                else if(st.top()=='(')
                {
                    st.pop();
                }
            }
            else if(st.size()>0 && s[i]=='}')
            {
                if(st.top()!='{')
                {
                    return false;
                }
                else if(st.top()=='{')
                {
                    st.pop();
                }
            }
            else if(st.size()>0 && s[i]==']')
            {
                if(st.top()!='[')
                {
                    return false;
                }
                else if(st.top()=='[')
                {
                    st.pop();
                }
            }
            else if(s[i]=='}' || s[i]==')' || s[i]==']')
            {
                if(st.size()==0) return false;
            }
            
        }
        if(f==0) return false;
        if(st.size()>0) return false;
        return true;
    }
};