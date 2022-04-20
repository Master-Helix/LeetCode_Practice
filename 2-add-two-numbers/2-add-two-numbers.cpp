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
        
        
        ListNode *ans=new ListNode(-1);
        ListNode *t=ans;
        
        ListNode *a1=l1,*a2=l2;
        int carry=0;
        while(a1 && a2)
        {
            int k=a1->val+a2->val+carry;
            carry=k/10;
            ans->next=new ListNode(k%10);
            ans=ans->next;
            a1=a1->next;
            a2=a2->next;
        }
        
        while(a1)
        {
            int k=a1->val+carry;
            carry=k/10;
            ans->next=new ListNode(k%10);
            ans=ans->next;
            a1=a1->next;
        }
        
         while(a2)
        {
            int k=a2->val+carry;
            carry=k/10;
            ans->next=new ListNode(k%10);
            ans=ans->next;
            a2=a2->next;
        }
        
        if(carry==1)
        {
            ans->next=new ListNode(1);
            carry=0;
        }
        return t->next;
    }
};