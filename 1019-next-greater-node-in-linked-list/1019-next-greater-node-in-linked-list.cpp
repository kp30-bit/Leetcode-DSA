/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        ListNode *ptr=head;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        vector<int>ans;
        stack<int>st;
        int n=v.size();
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                ans.push_back(0);
                
            }
            else if(st.size()>0 && st.top()>v[i])
            {
                ans.push_back(st.top());
            }
            else if(st.size()>0 && st.top()<=v[i])
            {
                while(st.size()>0 && st.top()<=v[i])
                {
                    st.pop();
                }
                if(st.size()==0) ans.push_back(0);
                else ans.push_back(st.top());
            }
            st.push(v[i]);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};