#ifndef STACK_H
#define STACK_H

/*
 * You will need to implement a stack supporting most of functions 
 * std::stack provides. If you are not sure how your implementation should 
 * behave, try it yourself with std::stack. Here is reference page of 
 * std::stack: http://www.cplusplus.com/reference/stack/stack/
 * Graders will not care how you implement this. Just leave function 
 * definitions intact so they can call them.
 */

template <typename type>
class Stack {
    // As we said, we do not care if you use these private members.
    // Modify them if you want to.
    type* array;
    int arraySize;
    int stackSize;
    void resize(int newSize);

public:
    // Constructor
    explicit Stack();

    // Destructor
    ~Stack();

    // Store new element
    void push(const type& item);

    // Return last element
    // const functions prohibits modification of the object
    type& top() const;

    // Remove last element
    void pop();

    // Number of elements stored
    int size() const;

    // Return true if empty, false otherwise
    bool empty() const;
};

// Implement functions below

template <typename type>
Stack<type>::Stack() {
    arraySize = 2;
    stackSize = 0;
    array = new type[arraySize];
}

template <typename type>
Stack<type>::~Stack() {
    delete array;
}

template <typename type>
void Stack<type>::push(const type &item) {
    if(stackSize == arraySize){
        resize(arraySize*2);
    }
    array[stackSize] = item;
    stackSize++;
}

template <typename type>
type& Stack<type>::top() const {
    return array[stackSize-1];
}

template <typename type>
void Stack<type>::pop() {
    stackSize -= 1;
}

template <typename type>
int Stack<type>::size() const {
    return stackSize;
}

template <typename type>
bool Stack<type>::empty() const {
    return stackSize == 0;
}

template <typename type>
void Stack<type>::resize(int newSize) {
    type* newArr = new type[newSize];

    memcpy(newArr, array, arraySize * sizeof(type));
    size = newSize;
    delete [] array;
    array = newArr;
}
#endif //STACK_H
