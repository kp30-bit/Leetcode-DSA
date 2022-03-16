class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int j=0,i=0;
        int ans=0;
        unordered_map<char,int>m;
        while(j<n && i<n){
            m[s[j]]++;
            if(j-i+1<3)
            {
                j++;
            }else if(m.size()==3){
                ans++;
                m.erase(s[i]);
                i++;
                j++;
            }
            else{
                m[s[i]]--;
                if(m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
                j++;
            }
            
            
        }
        return ans;
    }
};