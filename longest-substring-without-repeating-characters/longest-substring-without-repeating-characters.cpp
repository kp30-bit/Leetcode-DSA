#include<math.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength=0;
        int i=0;
        unordered_set<char>st;
        for(int j=0;j<s.size();j++)
        {
            if(st.find(s[j])==st.end())
            {
                st.insert(s[j]);
                maxlength=max(maxlength,j-i+1);
            }
            else{
                while(i!=j && s[i]!=s[j])
                {
                    st.erase(s[i++]);
                
                }
                st.erase(s[i++]);
        
                st.insert(s[j]);
                maxlength=max(maxlength,j-i+1);
            }
        }
        return maxlength;
    }
};