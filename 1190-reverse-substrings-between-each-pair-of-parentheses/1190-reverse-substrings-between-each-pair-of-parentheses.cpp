class Solution {
public:
    string reverseParentheses(string s) {
        // int n=s.size();
        // stack<char>st;
        // string ans="";
        // string temp="";
        // for(int i=0;i<n;i++)
        // {
        //     if(s[i]==')')
        //     {
        //         while(st.size()>0 && st.top()!='(')
        //         {
        //             temp+=st.top();
        //             st.pop();
        //         }
        //         ans+=temp;
        //     }
        //     else{
        //         st.push(s[i]);
        //     }
        // }
        // while(st.size()>0)
        // {
        //     if(st.top()!='(')
        //         ans+=st.top();
        //     st.pop();
        // }
        // return ans;
        // deque<string> st;
        // string cur = "";
        // for(int i=0;i<s.size();++i){
        //     if(s[i] == '('){
        //         st.push_back(cur);
        //         cur = "";
        //     }
        //     else if(s[i] == ')'){
        //         reverse(cur.begin(),cur.end());
        //         cur = st.back()+cur;
        //         st.pop_back();
        //     }else cur += s[i];
        // }
        // return cur;
        
        
        
        
        
        
        
        
        
        
        deque<string>st;
        string cur="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push_back(cur);
                cur="";
            }
            else if(s[i]==')')
            {
                reverse(cur.begin(),cur.end());
                cur=st.back()+cur;
                st.pop_back();
            }
            else{
                cur+=s[i];
            }
        }
        return cur;
        
    }
};