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
        
        ListNode *temp=head;
        if(!head || !head->next)
            return head;
        
        int ctr=0;
        while(temp)
        {
            ctr++;
            temp=temp->next;
        }
        temp=head;
        
        if(k>=ctr)
        {
            k=k%ctr;
        }
        
        if(k==0)
            return head;
        
        k=ctr-k-1;
        while(k>0)
        {
            temp=temp->next;
            k--;
        }
        
        ListNode *t=temp->next;
        temp->next=NULL;
        ListNode *ans=t;
        while(t->next)
            t=t->next;
        
        t->next=head;
        return ans;
        
        
        
    }
};