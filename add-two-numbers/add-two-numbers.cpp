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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1->val==0 && l2->val==0 && l1->next==NULL && l2->next==NULL) 
            return l1;
        ListNode *ptr1=l1;
        ListNode *ptr2=l2;
        ListNode *tptr=NULL;
        // for unequal lists... extend the shorter list and make it of the same size of the longer list and put the values of extra nodes as zero
        ListNode *size1=l1;
        ListNode *size2=l2;
        int count1=0,count2=0;
        while(size1!=NULL)
        {
            count1++;
            size1=size1->next;
        }
        while(size2!=NULL)
        {
            count2++;
            size2=size2->next;
        }
        int dif=abs(count1-count2);
        size1=l1;
        size2=l2;
        if(count1<count2)
        {
            while(size1->next!=NULL)
            {
                size1=size1->next;
            }
            for(int i=0;i<dif;i++)
            {
                ListNode* newNode=new ListNode;
                newNode->next=NULL;
                newNode->val=0;
                size1->next=newNode;
                size1=size1->next;
            }
        }
        if(count1>count2)
        {
            while(size2->next!=NULL)
            {
                size2=size2->next;
            }
            for(int i=0;i<dif;i++)
            {
                ListNode* newNode=new ListNode;
                newNode->next=NULL;
                newNode->val=0;
                size2->next=newNode;
                size2=size2->next;
            }
        }
        while(ptr1!=NULL &&  ptr2!=NULL)
        {
            tptr=ptr1;
            int carry;
            int rem;
            int sum=ptr1->val+ptr2->val;
            if(sum>9)
            {
                rem=sum%10;
                carry=sum/10;
                tptr->val=rem;
                if(tptr->next!=NULL)
                {
                    tptr->next->val+=carry;
                }
                else if(tptr->next==NULL)
                {
                    ListNode* newNode=new ListNode;
                    newNode->val=carry;
                    newNode->next=NULL;
                    tptr->next=newNode;
                }
            }
            else{
                tptr->val=sum;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            
        }
        return l1;
    }
};