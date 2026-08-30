class MyCircularQueue {
private:
 
struct Node
{
    int val;
    Node* next;
    Node(int x)
    {
        val=x;
        next=nullptr;

    }
};
int capacity;
int size;
Node* head,*tail;
public:
    MyCircularQueue(int k) {
        capacity=k;
        size=0;
       head=nullptr;
         tail=nullptr;
    }

    bool enQueue(int value) {
        if(size==capacity)
        return false;
        if(size==0)
        {
            head=tail=new Node(value);
            size++;
            return true;
        }
        Node* newNode=new Node(value);
        tail->next=newNode;
        tail=newNode;
        size++;
        return true;

    }

    bool deQueue() {
       if(size==0)
       return false;
       
       Node* temp=head;
       head=head->next;
       delete temp;
       size--;
       return true;

    }

    int Front() {
        if(size!=0)
        return head->val;
        else
        return -1;
    }
    int Rear() {
        if(size!=0)
        return tail->val;
        return -1;
    }
    bool isEmpty() {
        return size==0;
    }

    bool isFull() {
        return size==capacity;
    }
};