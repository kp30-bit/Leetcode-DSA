class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>binary;
        for(int i=0;i<=n;i++)
        {
            int s=__builtin_popcount(i);
            binary.push_back(s);
        }
        return binary;
    }
};