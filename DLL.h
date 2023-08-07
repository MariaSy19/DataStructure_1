#ifndef UNTITLED27_DLL_H
#define UNTITLED27_DLL_H

template<typename T>
class DLL
{
    struct Node
    {
        T itme;
        Node *next;
        Node *prev;
    };
    Node *head, *tail;
    int length = 0;
public:
    void isertAtFirst(const T& item);
};

template<typename T>
void DLL<T>::isertAtFirst(const T &item)
{
    Node *newNode = new Node;//create a new node in a LL
    newNode->itme = item; // put the item you entered a new node
    if (length == 0) // if the LL is empty don't have any node
    {
        head = tail = newNode; //because we have just only one node in LL so the head and the tail of LL refer to a newNode
        newNode->next = newNode->prev = nullptr; // because we have just only one node in LL { null<--||item||-->null }
    }else //if wa have more than one node in LL
    {
        newNode->next = head; //because we insert at First so the head pointer must  refer to a new node
        newNode->prev = nullptr; // because the newNode become a First node in the LL
        head->prev = newNode;
        head = newNode;
    }
    length++;

}
#endif //UNTITLED27_DLL_H
