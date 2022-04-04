class Solution {
public:
    int maximum69Number (int num) {
        string st=to_string(num);
        string st2="";
        int count=0;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='6' && count==0)
            {
                st2+='9';
                count=1;
                continue;
            }
            st2+=st[i];
        }
        int ans=stoi(st2);
        return ans;
    }
};