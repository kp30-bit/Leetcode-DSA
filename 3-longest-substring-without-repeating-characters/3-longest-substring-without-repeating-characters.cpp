#include<math.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxxlength=0;
        int i=0,j=0;
        int n=s.size();
        string temp="";
        unordered_map<char,int>m;
        while(j<n){
            m[s[j]]++;
            if(m.size()==j-i+1)
            {
                maxxlength=max(maxxlength,j-i+1);
                // m[s[i]]--;
                // if(m[s[i]]==0) m.erase(s[i]);
                //i++;
                j++;
            }
            else if(m.size()!=j-i+1)
            {
                m[s[i]]--;
                if(m[s[i]]==0) m.erase(s[i]);
                i++;
                j++;
            }
        }
        return maxxlength;
    }
};