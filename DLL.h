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
    int length ;
public:
    DLL();
    void insertAtFirst(const T& item);
    void print();
    void insertAtTail(const T& item);
    bool  isEmpty();
};

template<typename T>
DLL<T>::DLL()
{
    head = nullptr;
    tail = nullptr;
    length = 0;
}

template<typename T>
bool  DLL<T>::isEmpty()
{
    return (head == 0);
}
template<typename T>
void DLL<T>::insertAtFirst(const T &item)
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

template<typename T>
void DLL<T>::print()
{
    Node* cur = head;
    while (cur != nullptr)
    {
        cout << cur->item << " ";
        cur = cur->next;
    }
    cout << endl;
}

template<typename T>
void DLL<T>::insertAtTail(const T &item)
{
    Node *newNode = new Node;
    newNode->itme = item;
    if (length == 0)
    {
        head = tail = newNode;
        newNode->next = newNode->prev = nullptr;
    } else
    {
        newNode->next = nullptr;
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

#endif //UNTITLED27_DLL_H
