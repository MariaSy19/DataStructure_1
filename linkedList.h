
#ifndef UNTITLED27_LINKEDLIST_H
#define UNTITLED27_LINKEDLIST_H

template<class T>
class linkedList {
    class Node {
    public:
        T item;
        Node *next;
    };
    Node* head;
    Node *first;
    Node *last;
    int length = 0;
public:
    linkedList();
    bool isEmpty();
    void insertFirst(T element);
    void insertLast(T element);
    void insertAtPos(int pos, T item);
    void print();
};


#endif //UNTITLED27_LINKEDLIST_H
