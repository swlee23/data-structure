#ifndef QUEUE_H
#define QUEUE_H

/*
 * You will need to implement a queue supporting most of functions std::queue provides.
 * If you are not sure how your implementation should behave, try it yourself with std::queue.
 * Here is reference page of std::queue: http://www.cplusplus.com/reference/queue/queue/
 *
 * Graders will not care how you implement this.
 * Just leave function definitions intact so they can call them.
 */

template <typename type>
class Queue {
    // As we said, we do not care if you use these private members.
    // Modify them if you want to.
    type* array;
    int arraySize;
    int queueSize;
    int front;
    int rear;

    //resizes the array with a new array of size of the input variable
    void resize(int newSize);

public:
    // Constructor
    // explicit prohibits implicit conversion of a variable to a Queue class
    // i.e., all Queue objects must be constructed manually and explicitly
    explicit Queue();

    // Destructor
    ~Queue();

    // Store new element
    void push(const type& item);

    // Return first element
    type& getFront() const;

    // Remove first element
    void pop();

    // Number of elements stored
    int size() const;

    // Return true if empty, false otherwise
    bool empty() const;
};

// Implement functions below

template <typename type>
Queue<type>::Queue() {
    front = 0;
    rear = 0;
    arraySize = 2;
    queueSize = 0;
    array = new type[arraySize];
}

template <typename type>
Queue<type>::~Queue() {
    delete array;
}

template <typename type>
void Queue<type>::push(const type &item) {
    bool isFull = full();
    if(isFull) {
        resize(arraySize*2);
    }
    array[(end+1)%arraySize] = item;
    queueSize++;
    rear = (end+1)%arraySize;
}

template <typename type>
type& Queue<type>::getFront() const {
    type retVal = array[front];
    front = (front+1)%arraySize;
    return retVal;
}

template <typename type>
void Queue<type>::pop() {
    queueSize--;
    front = (front+1)%arraySize;
    if(queueSize < arraySize/4){
        resize(arraySize/2);
    }
}

template <typename type>
int Queue<type>::size() const {
    return queueSize;
}

template <typename type>
bool Queue<type>::empty() const {
    return (front == rear) && (queueSize == 0);
}

template <typename type>
bool Queue<type>::full() const {
    return (front == rear) && (queueSize != 0);
}

template <typename type>
void Stack<type>::resize(int newSize) {
    type* newArr = new type[newSize];
    for(int i=0; i<queueSize; i++){
        newArr[i] = array[(front+i)%arraySize];
    }
    arraySize = newSize;
    front = 0;
    end = arraySize -1 ;
    delete [] array;
    array = newArr;
}

#endif //QUEUE_H
