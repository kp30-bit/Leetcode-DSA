class Solution {
public:
    int longestConsecutive(vector<int>& A) {
        int ans = 0;
        unordered_set<int> s;
        if(A.size()==1) return 1;
        for(int i=0;i<A.size();i++) 
        {
            s.insert(A[i]);
        }
        for(int i=0;i<A.size();i++){
            if(s.find(A[i]-1)==s.end()){
                int var=A[i],count=0;
                while(s.find(var)!=s.end()) 
                {
                    count++;
                    var++;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};