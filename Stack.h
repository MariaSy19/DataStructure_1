
#ifndef UNTITLED27_STACK_H
#define UNTITLED27_STACK_H
#include <bits/stdc++.h>
const int MAX_SIZE = 100;
template<typename T>
class Stack
{
    int top;
    T items[MAX_SIZE];
public:
    Stack();
    void push (const T& element);
    void pop();
    void pop( T& element);
    void getTop();
    void print();
    bool isEmpty();
    bool areBalance(string exp);
    bool arePair(char open, char close);
};

template<typename T>
Stack<T>::Stack()
{
    top = -1;
}

template<typename T>
void Stack<T>::push(const T &element)
{

        top++;
        items[top] = element;

}

template<typename T>
bool Stack<T>::isEmpty() {
    if (top == -1)
    {
        cout << "The stack is empty. \n";
        return true;
    } else
    {
        return false;
    }
}

template<typename T>
void Stack<T>::pop()
{
    if (isEmpty())
    {
        return;
    } else
    {
        top--;
    }
}

template<typename T>
void Stack<T>::pop( T &element)
{
    if (isEmpty())
    {
        return;
    } else
    {
        element = items[top];
        cout << "The element is deleted: "<<element <<endl;
        top--;

    }
}

template<typename T>
void Stack<T>::getTop()
{
    if (isEmpty())
    {
        return;
    } else
    {
        cout << "The top of stack is: " <<items[top] <<endl;
    }
}

template<typename T>
void Stack<T>::print()
{
    cout << "[";
    for (int i = top; i >=0 ; --i)
    {
        cout << items[i] << " ";
    }
    cout << "]\n";
}

template<typename T>
bool Stack<T>::areBalance(string exp)
{
    stack<char> st;
    for (int i = 0; i < exp.length(); ++i)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            st.push(exp[i]);
        } else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (st.empty() || !areBalance(st.top(),exp[i]))
            {
                return false;
            } else {
                st.pop();
            }
        }
    }
    return st.empty();
}

template<typename T>
bool Stack<T>::arePair(char open, char close)
{
    if (open == '(' && close == ')')
    {
        return true;
    }else if (open == '{' && close == '}')
    {
        return true;
    } else if (open == '[' && close == ']')
    {
        return true;
    } else
    return false;
}

#endif //UNTITLED27_STACK_H
