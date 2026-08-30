class MyCircularQueue {
private:
struct Node
{
    Node* next;
    int val;
    Node(int v){
        val=v;
        next=nullptr;
    }
};
Node* head;
Node* tail;
int capacity;
int curr_size;
public:
    MyCircularQueue(int k) {
        capacity=k;
        curr_size=0;
        head=nullptr;
        tail=nullptr;
    }

    bool enQueue(int value) {
        if(curr_size==capacity)
        return false;
        if(curr_size==0)
        {
            curr_size++;
            head=tail=new Node(value);
        }
        else
        {
        Node* temp=new Node(value);
        tail->next=temp;
        tail=tail->next;
        curr_size++;
        }
        return true;

    }

    bool deQueue() {
        if(curr_size==0)
        return false;
       Node*  temp=head->next;
       head=temp;
       curr_size--;
       return true;

    }

    int Front() {
       if(curr_size==0)
       return -1;
       return head->val;
    }
    int Rear() {
        if(curr_size==0)
       return -1;
       return tail->val;
    }
    bool isEmpty() {
        return (curr_size==0);
    }

    bool isFull() {
        return (curr_size==capacity);
    }
};