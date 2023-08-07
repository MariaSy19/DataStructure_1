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
    void insertAtPos(int pos, const T& item);
    void removeAtFirst();
    void removeAtLast();
    void removeKey();
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

template<typename T>
void DLL<T>::insertAtPos(int pos, const T &item)
{
    if (pos < 0 || pos > length)
    {
        cout << "Invalid! pos. Out of the Range.\n";
        return;
    }
    Node *newNode = new Node;
    newNode->itme = item;
    if (length == 0)
    {
        insertAtFirst(item);
        length++;
    } else if (pos == length )
    {
        insertAtTail(item);
        length++;
    } else
    {
        Node *curr;
        newNode->next = curr->next; //in this line the new node.next refer to the next node but the curr still refer to the same node of the new node refer to it
        newNode->prev = curr;//in this line the new node.prev refer to the prev node but the curr still refer to the same node of the new node refer to it
        curr->next = newNode; // in this line cut the link between a curr node and the next node of the new node and become the curr node.next refer to new node
        curr->next->prev = newNode;// in this line cut the link between a curr node and the next node of the new node and become the next node.prev refer to new node
        length++;
    }
}

template<typename T>
void DLL<T>::removeAtFirst()
{
    //in the first case we make a check if the LL is empty
    if (length == 0)
    {
        cout << "Empty List.\n";
        return;
    }
    // in the second case if we have just one element
    else if (length == 1)
    {
        delete head; //delete the head
        tail = head = nullptr; // become tail and tail equal null
    }
    // in third case we have many node in LL
    else
    {
        Node *curr = head;
        head = head->next;
        head->prev = nullptr;
        delete curr; // delete the first node in the ll
    }
    length--;
}

template<typename T>
void DLL<T>::removeAtLast()
{
    //the first case if the LL is empty
    if (length == 0)
    {
        cout << "The Linked List is empty.\n";
        return;
    } else if (length == 1) //second case if the LL have just only one
    {
        delete head;
        tail = head = nullptr;
    } else //the third case
    {
        Node *curr = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete curr;
    }
    length--;
}

template<typename T>
void DLL<T>::removeKey()
{

}

#endif //UNTITLED27_DLL_H
