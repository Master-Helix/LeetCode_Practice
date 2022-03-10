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
        
        ListNode *a1=l1;
        ListNode *a2=l2;
        ListNode *ans=NULL;
        ListNode *t=ans;
        
        int carry=0;
        while(a1!=NULL && a2!=NULL)
        {
            int v=(a1->val)+(a2->val)+carry;
            if(ans==NULL)
            {
                ans=new ListNode(v%10);
                t=ans;
            }
            else{
            ans->next=new ListNode(v%10);
            ans=ans->next;
            }
            carry=v/10;
            a1=a1->next;
            a2=a2->next;
        }
        
        while(a2)
        {
            int v=a2->val+carry;
            ans->next=new ListNode(v%10);
            ans=ans->next;
            carry=v/10;
            a2=a2->next;
        }
        
        while(a1)
        {
            int v=a1->val+carry;
            ans->next=new ListNode(v%10);
            ans=ans->next;
            carry=v/10;
            a1=a1->next;
        }
        
        if(carry>0)
        {
            ans->next=new ListNode(carry);
            carry=0;
            ans=ans->next;
        }
        
        return t;
        
    }
};