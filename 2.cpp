// Question 2: Find the Middle Element of a Linked List
// Problem: Implement a function to find the middle element of a singly linked list.
// Input Example:
// Input: 1 -> 2 -> 3 -> 4 -> 5
// Output Example:
// Output: 3
#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    // converting array to linked list 
    int arr[9] = {1, 2, 3, 4, 5 , 6 , 7, 8, 9};  
    node* head = NULL;


    for (int i = 0; i < 9; i++) {
        if (head == NULL) {
            head = new node(arr[i]);  
        } else {
            node* tail = head;
            while (tail->next != NULL) {
                tail = tail->next;  
            }
            tail->next = new node(arr[i]);  
        }
    }

    // Print the linked list
    node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Find the middle element 

    int size = 0;
    node* current = head;
    while (current != NULL) {
        size++;
        current = current->next;
    }

    current = head;
    int middleIndex = size / 2;
    for (int i = 0; i < middleIndex; i++) {
        current = current->next;  
    }

    cout << "The middle element is: " << current->data << endl;

    return 0;
}