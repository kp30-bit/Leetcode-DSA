class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>m;
        int i=0,j=0;
        int n=s.size();
        string window="";
        while(i<n && j<n)
        {
            window+=s[j];
            if(j-i+1<10)
            {
                j++;
            }
            else{
                m[window]++;
                window.erase(0,1);
                i++;
                j++;
            }
        }
        
        auto it=m.begin();
        vector<string>ans;
        while(it!=m.end())
        {
            if(it->second>1)
            {
                ans.push_back(it->first);
            }
            it++;
        }
        return ans;
    }
};