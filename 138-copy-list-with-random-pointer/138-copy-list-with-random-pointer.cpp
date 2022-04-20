/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node *>m;
        for(Node* curr=head;curr!=NULL;curr=curr->next)
        {
            m[curr]=new Node(curr->val);
        }
        
        Node *ans=NULL;
        Node *t=ans;
        for(Node* curr=head;curr!=NULL;curr=curr->next)
        {
            Node *clone;
            clone=m[curr];
            clone->next=m[curr->next];
            clone->random=m[curr->random];
            if(ans==NULL)
            {
                ans=clone;
                t=ans;
            }
            else
            {
                ans->next=clone;
                ans=ans->next;
            }
        }
        return t;
        
        
    }
};