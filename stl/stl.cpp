//run c++ program -` ctrl+shift+b , then run main.exe from terminal

#include <iostream>
using namespace std;

// stl - algorithms, containers, iterators

//algorithms - search(), sort, binary_search, reverse, concat, copy, union, intersection, merge, heap

//container are collection of data
//they are template classes, they can work for any datatype.
//containers - vector, list, forward_list, deque, priority queue, stack, set, multiset

    // vectors are like arrays but they ccan grow and reduce on theor own. its a self managed array. functions - push_back(), pop_back(), insert(), remove(), size(), empty()

    //list: this class is for doubly linked list. functions - push_back(), pop_back(), insert(), remove(), size(), empty(), push_front(), pop_front(), front(), back().

    //forward list: this class is for singly linked list. functions - push_back(), pop_back(), insert(), remove(), size(), empty(), push_front(), pop_front(), front(), back().

    //deque: same as vectors. but in this you can add from front and delete from front. functions - push_back(), pop_back(), insert(), remove(), size(), empty(), push_front(), pop_front(), front(), back().

    //priority queue: is for max heap data structure.the largest element will be deleted from the queue. functions - push(), pop(), empty(), size(). 

    //stack: last in first out. functions - push_back(), pop_back(), insert(), remove(), size(), empty(), push_front(), pop_front(), front(), back().

    //set: contains only unique elements

    //multiset: allows duplicate elements

    //map: stores key-value pair. uses hash tables. it contains unique keys.

    //multimap: keys can be duplicated but same value should not be there.

//iterators - explained in vector.cpp
int main()
{

    system("pause");
    return 0;
}