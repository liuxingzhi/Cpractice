//
// Created by abel on 2/13/18.
//

#ifndef LIST_LINKEDLIST_H
#define LIST_LINKEDLIST_H

#include <iostream>
#include <string>
using namespace std;

template<typename T>
class LinkedList {
private:
    class Node {
    public:
        Node(T &t) : data(t), next(nullptr) {}
        Node(const Node &other):data(other.data),next(other.next){}
        T &data;
        Node *next;
    };
//    typedef ListNode Node;

public:
    void insertAtFront(T &t);

//    void add(T t);
    T &get(int index) const;

    T &remove(int index);

    void insert(T &t, int index);

    // same functionality as toString in java, __str__ in python
    template<typename F>
    friend ostream &operator<<(ostream &os, const LinkedList<F> &li);

    ~LinkedList(){delete head;}
private:
    Node *head = nullptr;

    Node *&find(int index) const;
};

#endif //LIST_LINKEDLIST_H

