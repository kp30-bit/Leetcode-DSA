class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            temp.push_back(nums[i]);
        }
        vector<int>ans;
        stack<int>st;
        for(int i=temp.size()-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                ans.push_back(-1);
            }
            else if(st.size()>0 && st.top()>temp[i])
            {
                ans.push_back(st.top());
            }
            else if(st.size()>0 && st.top()<=temp[i])
            {
                while(st.size()>0 && st.top()<=temp[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(st.top());
                }
            }
            st.push(temp[i]);
        }
        reverse(ans.begin(),ans.end());
        
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            a.push_back(ans[i]);
        }
        return a;
    }
};