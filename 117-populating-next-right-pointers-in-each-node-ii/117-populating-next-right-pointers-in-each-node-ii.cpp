/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
         queue<Node *>q;
        if(!root)
            return root;
        q.push(root);
        while(!q.empty())
        {
            int k=q.size();
            for(int i=0;i<k;i++)
            {
                auto a=q.front();
                q.pop();
                if(i==k-1)
                {
                    a->next=NULL;
                }
                else
                {
                    a->next=q.front();
                }
                if(a->left)
                    q.push(a->left);
                if(a->right)
                    q.push(a->right);
            }
        }
        return root;
    }
};