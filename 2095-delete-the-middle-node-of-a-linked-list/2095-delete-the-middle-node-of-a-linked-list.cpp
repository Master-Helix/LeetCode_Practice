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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode *temp=head;
        
        if(head->next==NULL || head==NULL)
        {
            return NULL;
        }
        
        int k=0;
        while(temp!=NULL)
        {
            k++;
            temp=temp->next;
        }
        
        k/=2;
        temp=head;
        for(int i=0;i<k-1;i++)
        {
            temp=temp->next;
        }
        auto a=temp;
        ListNode *t=temp->next;
        temp->next=t->next;
        

        return head;
    }
};