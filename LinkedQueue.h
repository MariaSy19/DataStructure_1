#ifndef UNTITLED27_LINKEDQUEUE_H
#define UNTITLED27_LINKEDQUEUE_H

template<typename T>
class LinkedQueue
{
   struct node {
       T item;
       node * next;
   };
   node *front, *rear;
   int count;
public:
    LinkedQueue();
    bool isEmpty();
    void enqueue(const T& item);
};

template<typename T>
LinkedQueue<T>::LinkedQueue()
{
    front =rear= nullptr;
    count = 0;
}

template<typename T>
void LinkedQueue<T>::enqueue(const T &item)
{
    node * newPtr = new node;
    newPtr->item = item;
    if (isEmpty())
    {
        newPtr->next = nullptr;
        rear = front;
        count++;
    }else
    {
        newPtr->next = nullptr;
        rear->next = newPtr;
        rear = newPtr;
        count++;
    }
}

template<typename T>
bool LinkedQueue<T>::isEmpty() {
    return front== nullptr;
}

#endif //UNTITLED27_LINKEDQUEUE_H
