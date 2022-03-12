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
        unordered_map<Node *,Node *>m;
        for(Node * curr=head; curr!=NULL;curr=curr->next)
        {
            m[curr]=new Node(curr->val);
        }
        
        Node *clone=NULL;
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
            clone=m[curr];
            clone->next=m[curr->next];
            clone->random=m[curr->random];
        }
        return m[head];
    }
};