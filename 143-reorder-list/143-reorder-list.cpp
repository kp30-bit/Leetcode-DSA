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
    void reorderList(ListNode* head) {
        deque<ListNode*>dq;
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            dq.push_back(ptr);
            ptr=ptr->next;
        }
       // cout<<dq.size()<<endl;
        ListNode* front;
        ListNode* back;
        ListNode* cur;
        while(dq.size()>1)
        {
            front=dq.front();
            back=dq.back();
            front->next=back;
            dq.pop_front();
            dq.pop_back();
            if(dq.size()>0)
                back->next=dq.front();
                dq.front()->next=NULL;
        }
    }
};