

class LRUCache
{
public:
    //create doubly linked list and store key with node inside hashmap
    struct node{
        int key;
        int val;
        node *next;
        node *prev;
        node(int a,int b){
            key=a,val=b;
        }
    };
    node *head=new node(-1,-1);
    node *tail=new node(-1,-1);
    int cap;
    unordered_map<int,node*>m;
    
    
    LRUCache(int capacity)
    {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
        // Write your code here
    }
    
    void addnode(node *newnode){
        //add newnode next to head of our global linked list
        node *temp=head->next;
        head->next=newnode;
        newnode->prev=head;
        newnode->next=temp;
        temp->prev=newnode;
    }
    
    void delete_node(node *newnode){
        newnode->prev->next=newnode->next;
        newnode->next->prev=newnode->prev;
    }

    int get(int key)
    {
        if(m.find(key)==m.end()) return -1;
        
        node *res=m[key];
        delete_node(res);
        int ans=res->val;
        m.erase(key);
        addnode(res);
        m[key]=head->next; // new address of the same node
        return ans;
        // Write your code here
    }

    void put(int key, int value)
    {
        // Write your code here
        if(m.find(key)!=m.end()){
            node *a=m[key];
            m.erase(key);
            delete_node(a);
        }
        
        if(m.size()==cap){
            // delete the last node inside the doubly linked list
            m.erase(tail->prev->key);
            delete_node(tail->prev);
        }
        node *add=new node(key,value);
        addnode(add);
        m[key]=head->next;  
    }
};
