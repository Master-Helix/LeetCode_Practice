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
    ListNode* rotateRight(ListNode* head, int k) {
        
        int ctr=0;
        ListNode *temp=head;
        if(!head)
            return head;
        while(temp!=NULL)
        {
            ctr++;
            temp=temp->next;
        }
        if(k>=ctr)
            k=k%ctr;
        if(k==0)
            return head;
        
        
        temp=head;
        k=ctr-k-1;
        while(k--)
        {
            temp=temp->next;
        }
        ListNode *v=temp->next;
        ListNode *ans=v;
        temp->next=NULL;
        while(v->next)
        {
            v=v->next;
        }
        v->next=head;
        return ans;
        
    }
};