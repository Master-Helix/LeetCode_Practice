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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *ans=new ListNode(-1);
        ListNode *a1=new ListNode(-1);
        ListNode *a2=a1;
        ListNode *a3=ans;
        
        ListNode *temp=head;
        if(!temp || !temp->next) return head;
        while(temp){
            if(temp->val<x){
                ans->next=new ListNode(temp->val);
                ans=ans->next;
            }
            else{
                a1->next=new ListNode(temp->val);
                a1=a1->next;
            }
            temp=temp->next;
        }
        ans->next=a2->next;
        return a3->next;
    }
};