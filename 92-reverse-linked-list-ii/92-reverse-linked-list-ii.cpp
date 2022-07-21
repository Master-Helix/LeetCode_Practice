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
    
    vector<ListNode *>reverse(ListNode *head,int left,int right){
        ListNode *temp=head;
        ListNode *prev=NULL;
      
        ListNode *n=NULL;
    
        while(right>=left){
            n=temp->next;
            temp->next=prev;
            prev=temp;
            temp=n;
            right--;
        }
        return {prev,n};
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode *temp1=head;
        ListNode *temp2=head;
        ListNode *t=temp1;
    
        if(!temp1->next) return head;
        int ctr=left-2;
        
        while(temp1->next && ctr>0){
            temp1=temp1->next;
            ctr--;
        }
        
        if(temp1->next==NULL) return head;
        vector<ListNode *>v;
        if(left==1){
            v=reverse(temp1,left,right);
        }
        else if(left>1){
            v=reverse(temp1->next,left,right);
        }
        
        if(left==1){
            temp1=v[0];
            t=temp1;
        }
        else{
        temp1->next=v[0];
        }
        
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        
        temp1->next=v[1];
        return t;
        
    }
};