class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int count=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                count++;
                flag=1;
            }
            else if(!isalpha(s[i]) && flag==1)
            { 
                return count;
            }
                
            
        }
        return count;
    }
};