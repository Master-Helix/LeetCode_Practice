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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     
    ListNode *temp=head;
        int ctr=0;
        while(temp!=NULL)
        {
            ctr++;
            temp=temp->next;
        }
        
        int k=ctr-n;
        
        temp=head;
        
        k--;
        while(k>0)
        {
            temp=temp->next;
            k--;
        }
        
        if(n==ctr)
        {
            head=head->next;
        }
        else
        {
            if(temp->next->next!=NULL)
            {
                temp->next=temp->next->next;
            }
            
            else
            {
                temp->next=NULL;
            }
        }
        
        return head;
    }
};