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
    int getDecimalValue(ListNode* head) {
        
        int ctr=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            ctr++;
            temp=temp->next;
        }
        
        temp=head;
        int ans=0;
        ctr--;
        while(temp!=NULL)
        {
            int k=temp->val*pow(2,ctr);
            ctr--;
            temp=temp->next;
            ans+=k;
        }
        return ans;
    }
};