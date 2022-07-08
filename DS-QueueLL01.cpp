#include<iostream>
using namespace std;
 
struct Node
{
    int data;
    Node *next ;
};

class Queue
{
    Node *front, *rear;
 public:
    Queue()
    {
        front = rear = NULL;  
 
    }
    void Enqueue(int element)    
    {
        Node *node;
        node = new Node;
        node->data = element;
        node->next = NULL;
 
        if(front == NULL)
            front = rear = node;
        else
        {
            rear->next = node;
            rear = node;
        }
    }

    void Dequeue()            
    {
        Node *temp;
        if(front == NULL)
            cout<<"Queue is Empty";
        else
        {
            temp= front;
            front = front->next;
            delete temp;
        }
    }
    void show()
    {
        Node *temp;
        temp= front;
        while(temp!=NULL) 
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Queue linked;
    linked.Enqueue(10);
    linked.Enqueue(12);
    linked.Enqueue(14);
    cout<<"\nQueue after inserting the 1st values is:\n";
    linked.show();
    linked.Enqueue(4);
    linked.Enqueue(7);
    linked.Enqueue(11);
    cout<<"\nQueue after inserting the 2nd value is:\n";
    linked.show();
    linked.Dequeue();
    linked.Dequeue();
    linked.Dequeue();
    linked.Dequeue();
    linked.Dequeue();
    
    cout<<"\nQueue after deleting a value from the queue:\n";
    linked.show();
}