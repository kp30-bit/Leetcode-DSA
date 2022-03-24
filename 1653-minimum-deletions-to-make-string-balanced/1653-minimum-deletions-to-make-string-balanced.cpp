class Solution {
public:
    int minimumDeletions(string s) {
        int count=0;
        stack<char>st;
        // for(int i=s.size()-1;i>=0;i--)
        // {
        //     if(st.size()>0 && st.top()<s[i])
        //     {
        //         count++;
        //         st.pop();
        //     }
        //     else{
        //         st.push(s[i]);
        //     }
        // }
        for(int i=0;i<s.size();i++)
        {
            if(st.size()>0 && st.top()>s[i])
            {
                count++;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return count;
    }
};