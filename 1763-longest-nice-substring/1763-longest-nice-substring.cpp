class Solution {
public:
    string longestNiceSubstring(string s) {
        // if(s.size()<2) return "";
        // unordered_set<char>set;
        // for(int i=0;i<s.size();i++)
        // {
        //     set.insert(s[i]);
        // }
        // for(int i=0;i<s.size();i++)
        // {
        //     if((set.find(tolower(s[i]))!=set.end()) && (set.find(toupper(s[i])))!=set.end())
        //     {
        //         continue;
        //     }
        //     string prev=longestNiceSubstring(s.substr(0,i));
        //     string next=longestNiceSubstring(s.substr(i+1));
        //     return prev.size()>=next.size()?prev:next;
        // }
        // return s;
        if(s.size()<2) return "";
        unordered_set<char>set;
        for(int i=0;i<s.size();i++)
        {
            set.insert(s[i]);
        }
        for(int i=0;i<s.size();i++)
        {
            if((set.find(tolower(s[i]))==set.end()) || (set.find(toupper(s[i])))==set.end())
            {
                string prev=longestNiceSubstring(s.substr(0,i));
                string next=longestNiceSubstring(s.substr(i+1));
                return prev.size()>=next.size()?prev:next;
            }
            
        }
        return s;
    }
};