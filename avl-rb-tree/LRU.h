#ifndef LRU_H
#define LRU_H

#include <list>
#include "Tree.h"
#include "AVLTree.h"
#include "RBTree.h"

// WARNING: You will get ZERO points for LRU
// if you did not use a tree to search items.
// For example, searching cache items in list is NOT allowed.

template <class T>
class LRU {
    // Choose one you want to use
    Tree_t<T, typename std::list<T>::iterator>* index;
    // AVLTree_t<T, typename std::list<T>::iterator>* index;
    // RBTree_t<T, typename std::list<T>::iterator>* index;

    std::list<T> history;
    int size; // maximum cache size
    int misses; // # of misses until now

    // You may add variables and functions if you need them

public:
    LRU(int _size) {
        // Constructor
    }

    LRU(int _size, Tree_t<T, typename std::list<T>::iterator>* _index) {
        // Constructor with external tree
        // Change definition as needed (to other tree types)
        // Only empty trees will be given as parameter
        // This has no practical meaning, just for grading purposes
    }

    ~LRU() {
        // Destructor
    }

    bool exists(T value) const {
        // Return true if value exists in the cache
        // Return false otherwise
    }

    int status() const {
        // Return number of elements in cache
    }

    bool touch(T value) {
        // The value is being accessed
        // Return true on hit, false on miss
        // i.e. return true if it existed, and false when it was not
    }

    int get_misses() const {
        // Return the number of cache misses until now
    }

    void print() const {
        // DO NOT EDIT THIS
        index->print();
        history.print();
    }
};

#endif