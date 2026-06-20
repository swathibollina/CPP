class Node
{
    public:
    int key,val;
    Node* prev=NULL;
    Node* next=NULL;
    Node(int key,int val)
    {
        this->key=key;
        this->val=val;
    }
};

class DoublyLinkedList
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    void delete_tail()
    {
        if(tail==NULL)
        return;
        else if(head==tail)
        {
            head=NULL;
            tail=NULL;
        }
        else
        {
            tail=tail->prev;
            tail->next=NULL;
        }

    }
    Node* insert_at_head(Node* node)
    {
        if(head==NULL)
        {
            head=node;
            tail=node;
        }
        else
        {
            head->prev=node;
            node->next=head;
            head=node;
        }
        return head;
    }
    void move_to_head(Node* node)
    {
        if(node==head)
        return;
        else if(node==tail)
        {
            tail=tail->prev;
            tail->next=NULL;
        }
        else
        {
            Node* prev_node=node->prev;
            Node* next_node=node->next;
            prev_node->next=next_node;
            next_node->prev=prev_node;
        }
        head->prev=node;
        node->next=head;
        head=node;
    }
};

class LRUCache {
public:
    int max_capacity;
    int cur_capacity;
    unordered_map<int,Node*> mp;
    DoublyLinkedList *dll;
    LRUCache(int capacity) {
        this->max_capacity=capacity;
        this->cur_capacity=0;
        this->dll=new DoublyLinkedList();
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end())
        return -1;
        dll->move_to_head(mp[key]);
        return mp[key]->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end())
        {
            mp[key]->val=value;
            dll->move_to_head(mp[key]);
        }
        else
        {
            Node* node=new Node(key,value);
            if(cur_capacity < max_capacity)
            {
                mp[key]=dll->insert_at_head(node);
                cur_capacity++;
            }
            else
            {
                mp.erase(dll->tail->key);
                dll->delete_tail();
                mp[key]=dll->insert_at_head(node);
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
