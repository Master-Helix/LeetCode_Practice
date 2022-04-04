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
    ListNode* swapNodes(ListNode* head, int k) {
        
        vector<int>arr;
        ListNode *temp=head;
        if(!head)
            return head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
        swap(arr[k-1],arr[arr.size()-k]);
        
        ListNode *ans=new ListNode(-1);
        ListNode *t=ans;
        for(int i=0;i<arr.size();i++)
        {
            t->next=new ListNode(arr[i]);
            t=t->next;
        }
        return ans->next;
    }
};