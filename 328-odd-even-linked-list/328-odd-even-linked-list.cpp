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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *even=NULL,*odd=NULL;
        ListNode *e=even,*o=odd;
        
        ListNode *temp=head;
        if(!temp)
            return head;
        
        int flag=-1;
        int c=0;
        while(temp)
        {
            if(c==0)
            {
                if(flag==-1)
                    flag=1;
                if(even==NULL)
                {
                    even=new ListNode(temp->val);
                    e=even;
                }
                else
                {
                    even->next=new ListNode(temp->val);
                    even=even->next;
                }
                c=1;
            }
            else if(c==1)
            {
                if(flag==-1)
                    flag=0;
                if(odd==NULL)
                {
                    odd=new ListNode(temp->val);
                    o=odd;
                }
                else
                {
                    odd->next=new ListNode(temp->val);
                    odd=odd->next;
                }
                c=0;
            }
            temp=temp->next;
        }
        
        if(!o)
            return e;
        if(!e)
            return o;
        if(flag==0)
        {
            odd->next=e;
            return o;
        }
        if(flag==1)
        {
            even->next=o;
            return e;
        }
        return head;
        
        
    }
};