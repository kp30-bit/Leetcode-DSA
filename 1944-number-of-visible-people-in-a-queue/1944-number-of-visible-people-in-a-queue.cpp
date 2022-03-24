class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        int count=0;
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                ans.push_back(count);
              
            }
            else if(st.size()>0 && st.top()<=heights[i])
            {
                while(st.size()>0 && st.top()<=heights[i])
                {
                    count++;
                    st.pop();
                }
                if(st.size()==0)
                    ans.push_back(count);
                else 
                    ans.push_back(count+1);
                count=0;
            }
            else if(st.size()>0 && st.top()>=heights[i])
            {
                ans.push_back(1);
                
            }
            st.push(heights[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};