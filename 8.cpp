// Question 8: Implement Queue using Linked List
// Problem: Create a queue using a linked list and perform the following operations: Enqueue, Dequeue, and
// Display.
// Input Example:
// Enqueue: 5, 10, 15
// Dequeue: 1
// Output Example:
// Queue after operations: [10, 15]
#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue
{
public:
    node *front;
    node *rear;

    Queue()
    {
        front = rear = NULL;
    }

    void enqueue(int value)
    {
        node *newNode = new node(value);
        if (rear == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " enqueued to queue." << endl;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }
        node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        cout << temp->data << " dequeued from queue." << endl;
        delete temp;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;

    // Enqueue elements to the queue
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    // Display the queue
    q.display();

    // Dequeue an element from the queue
    q.dequeue();

    // Display the queue after dequeue
    q.display();

    return 0;
}