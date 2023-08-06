#ifndef UNTITLED27_LINKEDLIST_H
#define UNTITLED27_LINKEDLIST_H

#include <iostream>
#include <string>
using namespace std;
template<typename T>
class linkedList {
protected:
    struct Node {
        T item;
        Node* next;
    };
    Node* first;
    Node* last;
    int length;

public:
    linkedList();
    bool isEmpty();
    void insertFirst(const T& element);
    void insertLast(const T& element);
    void insertAtPos(int pos, const T& item);
    void RemoveAtFirst();
    void print();
};

template<typename T>
linkedList<T>::linkedList() : first(nullptr), last(nullptr), length(0) {}

template<typename T>
bool linkedList<T>::isEmpty() {
    return (first == nullptr);
}

template<typename T>
void linkedList<T>::insertFirst(const T& element)
{
    Node* newNode = new Node;
    newNode->item = element;
    newNode->next = first; // Update the new node's next to the current first node

    // If the linked list is empty
    if (length == 0)
    {
        last = newNode;
    }

    first = newNode; // Update the first pointer to the new node
    length++;
}

template<typename T>
void linkedList<T>::insertLast(const T& element)
{
    Node* newNode = new Node;
    newNode->item = element;
    newNode->next = nullptr;

    if (length == 0) {
        first = newNode; // Update the first pointer if the list is empty
    } else {
        last->next = newNode;
    }

    last = newNode;
    length++;
}

template<typename T>
void linkedList<T>::insertAtPos(int pos, const T& item)
{
    //pos is entered out of the range
    if (pos < 0 || pos > length)
    {
        cout << "Invalid position.\n";
        return;
    }

    Node* newNode = new Node;
    newNode->item = item;
    newNode->next = nullptr;

    //if the pos is entered in the first node
    if (pos == 0) {
        insertFirst(item);
    } else if (pos == length)
    {
        insertLast(item);
    } else
    {
        Node *curr = first;
        for (int i = 1; i < pos; ++i) // Change the loop condition
        {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        length++;
    }
}

template<typename T>
void linkedList<T>::RemoveAtFirst()
{
    if (length == 0)//in this case the linked list is empty don't have any node
    {
        return;
    } else if (length == 1) //in this case the linked list has only one node
    {
        delete first;
        first =last = nullptr;
        length--;
    } else //in this case the linked list have a many nodes
    {
        Node * curr = first; //create a new node and make it equal the first node
        first = first->next; //for make first node refer to the node after
        delete curr;
        length--;
    }
}

template<typename T>
void linkedList<T>::print() {
    Node* cur = first;
    while (cur != nullptr) {
        cout << cur->item << " ";
        cur = cur->next;
    }
    cout << endl;
}

#endif //UNTITLED27_LINKEDLIST_H
