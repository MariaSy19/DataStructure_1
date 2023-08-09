#ifndef UNTITLED27_QUEUEBYARR_H
#define UNTITLED27_QUEUEBYARR_H
const int MAX_LRNGTH = 100;

template<typename T>
class QueueByArray
{
    // enqueue = push add at the last
    // dequeue = pop delete from front
    int rear; // a tail of the queue
    int front; // a head of the queue
    int count; //a length of the queue
    T arr[MAX_LRNGTH];
public:
    QueueByArray();
    bool isEmpty();
    bool isFull();
    void addQueue(const T& element);
    void deleteQueue();
    T getFront();
    T search(const T& element);
    void print();
};

template<typename T>
QueueByArray<T>::QueueByArray()
{
    rear = MAX_LRNGTH -1;
    front = 0;
    count = 0;
}

template<typename T>
bool QueueByArray<T>::isEmpty()
{
    return count == 0;
}

template<typename T>
bool QueueByArray<T>::isFull() {
    return count == MAX_LRNGTH;
}

template<typename T>
void QueueByArray<T>::addQueue(const T& element)
{
    if (isFull())
    {
        cout << "Queue Full! Can't Enqueue. \n";
    }else
    {
        rear = (rear + 1 )% MAX_LRNGTH;
        arr[rear] = element; // because in queue the add operation in the backe
        count++;
    }
}

template<typename T>
void QueueByArray<T>::deleteQueue()
{
    if (isEmpty())
    {
        cout << "Queue is Empty Can't Dequeue...! \n";
    } else
    {
        front = (front+1)%MAX_LRNGTH;
        count--;
    }
}

template<typename T>
T QueueByArray<T>::getFront()
{
    if (isEmpty())
    {
        cout << "Queue is Empty Can't Dequeue...! \n";
    } else {
        return arr[front];
    }
}

template<typename T>
void QueueByArray<T>::print()
{
    for (int i = front; i != rear ; i = (i+1)%MAX_LRNGTH)
    {
        cout << arr[i]<< " " ;
    }
    cout << arr[rear];
}

template<typename T>
T QueueByArray<T>::search(const T& element) {
    int pos = -1;
    if (!isEmpty())
    {
        for (int i = front; i != rear ; i = (i+1)%MAX_LRNGTH) //loop in queue
        {
            if (arr[i] == element) //find the element in the queue
            {
                pos = i; // in variable pos save the index of the element
                break;
            }
            if (pos == -1)
            {
                if (arr[rear] == element)
                {
                    pos = rear;
                }
            }
        }
    }else
    {
        cout << "Queue is Empty Can't Dequeue...! \n";
    }
}

#endif //UNTITLED27_QUEUEBYARR_H
