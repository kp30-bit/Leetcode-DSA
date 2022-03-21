class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        vector<int>greater;
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                greater.push_back(-1);
            }
            else if(st.size()>0 && st.top()>nums2[i]){
                greater.push_back(st.top());
            }
            else if(st.size()>0 && st.top()<=nums2[i])
            {
                while(st.size()>0 && st.top()<=nums2[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    greater.push_back(-1);
                }
                else{
                    greater.push_back(st.top());
                }
            }
            st.push(nums2[i]);
        }
        reverse(greater.begin(),greater.end());
        vector<int>ans;
        for(auto itr:nums1)
        {
            int num=itr;
            for(int i=0;i<nums2.size();i++)
            {
                if(nums2[i]==num)
                {
                    ans.push_back(greater[i]);
                }
            }
        }
        return ans;
    }
};