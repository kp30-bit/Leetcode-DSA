
class Solution {
public:
    
    int maxVowels(string s, int k) {
        unordered_map<char,int>m;
        int i=0,j=0,mx=0,ans=0;
        int n=s.size();
        while(i<n && j<n)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
                ans++;
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                // if(m.size()>mx) mx=m.size();
                // m[s[i]--];
                // if(m[s[i]]==0)
                // {
                //     m.erase(s[i]);
                // }
                mx=max(mx,ans);
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    ans--;
                }
                i++;
                j++;
            }
        }
        return mx;
    }
};