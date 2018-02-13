//
// Created by abel on 2/13/18.
//

#ifndef LIST_LINKEDLIST_H
#define LIST_LINKEDLIST_H

template <typename T>
class LinkedList {
private:
    class Node{
    public:
        Node(T &t):data(t),next(nullptr){}
        T &data;
        Node *next;
    };

public:
    void insertAtFront(T &t);
//    void add(T t);
    T &get(int index) const;
    T &remove(int index);
    void insert(T &t,int index);

private:
    Node *head = nullptr;
    Node *&find(int index) const;

};


#endif //LIST_LINKEDLIST_H
