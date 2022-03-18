class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0,count=0;
        int n=s.size();
        unordered_map<char,int>m;
        while(i<n && j<n)
        {
            m[s[j]]++;
            while(m.size()==3)
            {
                count+=s.size()-j;
                m[s[i]]--;
                if(m[s[i]]==0){m.erase(s[i]);}
                i++;
            }
            j++;
        }
        return count;
        
    }
};