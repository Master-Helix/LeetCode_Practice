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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head || !head->next)
            return head;
        
        ListNode *temp=new ListNode(-1);
        ListNode *t=temp;
        
        while(head)
        {
            if(head->next && head->val==head->next->val)
            {
                int v=head->val;
                while(head && head->val==v)
                    head=head->next;
            }
            else
            {
                t->next=head;
                t=t->next;
                head=head->next;
            }
        }
        t->next=NULL;
        return temp->next;
        t=t->next;
        return t;
      
    }
};