
#ifndef UNTITLED27_STACKPOINTER_H
#define UNTITLED27_STACKPOINTER_H

template<typename T>
class StackPointer
{
    struct node
    {
        T item;
        node* next;
    };
    node *top;
public:
    StackPointer();
    void push(const T& item);
    void pop();
    void getTop();
    void display();
    bool isEmpty();

};

template<typename T>
StackPointer<T>::StackPointer()
{
    top = nullptr;
}

template<typename T>
void StackPointer<T>::push(const T &item)
{
    if (isEmpty())
    {
        cout << "The stack is empty.\n";
        return;
    } else
    {
        node *newNode = new node;
        if (newNode == nullptr)
        {
            cout << "Stack Can't allocate memory";
        } else {
            newNode->item = item;
            newNode->next = top;
            top = newNode;
        }
    }
}

template<typename T>
bool StackPointer<T>::isEmpty()
{
    return (top == nullptr);
}

template<typename T>
void StackPointer<T>::pop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty..!\n";
        return;
    } else
    {
        node *curr;
        curr = top;
        top = top->next;
        curr = curr->next = nullptr;
        delete curr;
    }
}

template<typename T>
void StackPointer<T>::getTop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty..!\n";
        return;
    } else
    {
        cout << top->item <<endl;
    }
}

template<typename T>
void StackPointer<T>::display()
{
    node *curr = top;
    cout << "[";
    while (curr != nullptr)
    {
        cout << curr->item << " ";
        curr = curr->next;
    }
    cout << "]";
}

#endif //UNTITLED27_STACKPOINTER_H
