class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        vector<int>invalidindex;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push({'(',i});
            }
            if(s[i]==')')
            {
                if(st.size()==0)
                {
                    invalidindex.push_back(i);
                }
                else{
                    st.pop();
                }
            }
        }
        while(st.size()>0)
        {
            invalidindex.push_back(st.top().second);
            st.pop();
        }
        sort(invalidindex.begin(),invalidindex.end());
        int a=0,b=0;
        string ans="";
        for(int a=0;a<s.size();a++)
        {
            if(b<invalidindex.size()){
            if(a==invalidindex[b])
            {
                b++;
                continue;
            }}
            ans+=s[a];
        }
        for(auto i:invalidindex)
        {
            cout<<i<<" ";
        }
        return ans;
    }
};