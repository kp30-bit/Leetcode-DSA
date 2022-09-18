class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int cur=1;
        int i=0;
        vector<string>ans;
        while(i<target.size())
        {
            if(target[i]==cur)
            {
                ans.push_back("Push");
                i++;
                cur++;
            }
            else if(target[i]!=cur)
            {
                ans.push_back("Push");
                ans.push_back("Pop");
                cur++;
            }
            
        }
        return ans;
    }
};