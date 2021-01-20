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
    type* _array;
    int _array_size;
    int _queue_size;
    int _curr;
    int _end;

public:
    // Constructor
    explicit Queue();

    // Destructor
    ~Queue();

    // Store new element
    void push(const type& item);

    // Return first element
    type& front() const;

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

}

template <typename type>
Queue<type>::~Queue() {

}

template <typename type>
void Queue<type>::push(const type &item) {

}

template <typename type>
type& Queue<type>::front() const {

}

template <typename type>
void Queue<type>::pop() {

}

template <typename type>
int Queue<type>::size() const {

}

template <typename type>
bool Queue<type>::empty() const {

}

#endif //QUEUE_H
