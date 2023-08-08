
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

    }
}

template<typename T>
bool StackPointer<T>::isEmpty()
{
    return (top == nullptr);
}

#endif //UNTITLED27_STACKPOINTER_H
