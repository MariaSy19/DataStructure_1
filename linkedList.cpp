
#include <bits/stdc++.h>
#include "linkedList.h"
using namespace std;
template<class T>
linkedList<T>::linkedList()
{
    first = nullptr;
    last = nullptr;
    length = 0;

}

template<class T>
bool linkedList<T>::isEmpty()
{
    return (first == nullptr); // first == null
}

template<class T>
void linkedList<T>::insertFirst(T element)
{
    Node*newNode = new Node;
    newNode->item = element;
    if (length == 0)
    {
        first = newNode;
        last = newNode;
        newNode->next = nullptr;
    } else
    {
        newNode->next = first;
        first = newNode;
    }
    length++;

}

template<class T>
void linkedList<T>::insertLast(T element)
{
    Node*newNode = new Node;
    newNode->item = element;
    if (length == 0)
    {
        first = newNode;
        last = newNode;
        newNode->next = nullptr;
    } else
    {
        last->next = newNode;
        newNode->next = nullptr;
        last = newNode;
    }
    length++;
}

template<class T>
void linkedList<T>::insertAtPos(int pos, T item)
{
    Node *newNode = new Node;
    newNode->item = item;
    Node *curr = head;
    for (int i = 0; i < pos -1; ++i)
    {
        curr = curr->next;
    }
}

template<class T>
void linkedList<T>::print()
{
    Node* cur = first;
    while (cur != nullptr)
    {
        cout<< cur->item <<" ";
        cur = cur->next;
    }
}
