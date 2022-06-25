class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ") return true;
        string s2;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                s2.push_back(tolower(s[i]));
            }
            else if(isdigit(s[i]))
            {
                s2.push_back(s[i]);
            }
        }
        string s3=s2;
        reverse(s3.begin(),s3.end());
        if(s2==s3) return true;
        return false;
    }
};