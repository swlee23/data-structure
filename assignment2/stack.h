#ifndef STACK_H
#define STACK_H

/*
 * You will need to implement a stack supporting most of functions std::stack provides.
 * If you are not sure how your implementation should behave, try it yourself with std::stack.
 * Here is reference page of std::stack: http://www.cplusplus.com/reference/stack/stack/
 *
 * Graders will not care how you implement this.
 * Just leave function definitions intact so they can call them.
 */

template <typename type>
class Stack {
    // As we said, we do not care if you use these private members.
    // Modify them if you want to.
    type* _array;
    int _array_size;
    int _stack_size;

public:
    // Constructor
    explicit Stack();

    // Destructor
    ~Stack();

    // Store new element
    void push(const type& item);

    // Return first element
    type& top() const;

    // Remove first element
    void pop();

    // Number of elements stored
    int size() const;

    // Return true if empty, false otherwise
    bool empty() const;
};

// Implement functions below

template <typename type>
Stack<type>::Stack() {

}

template <typename type>
Stack<type>::~Stack() {

}

template <typename type>
void Stack<type>::push(const type &item) {

}

template <typename type>
type& Stack<type>::top() const {

}

template <typename type>
void Stack<type>::pop() {

}

template <typename type>
int Stack<type>::size() const {

}

template <typename type>
bool Stack<type>::empty() const {

}

#endif //STACK_H
