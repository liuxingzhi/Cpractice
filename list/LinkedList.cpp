//
// Created by abel on 2/13/18.
//

#include "LinkedList.h"

template <typename T>
void LinkedList::insertAtFront(T &t) {
    Node *e = new Node(t);
    e->next = head;
    head = e;
}
template <typename T>
Node *&LinkedList::find(int index) const {
    Node *thru = head;
    for(int i=0;i<index;i++){
        thru = thru->next;
    }
    return thru->next;
}

template <typename T>
T & LinkedList::get(int index) const {
    Node *&target = find(index);
    return target->data;
}

template <typename T>
void LinkedList::insert(T &t, int index) {
    Node *e = new Node(t);
    Node *&ptr = find(index);
    e->next = ptr;
    ptr = e;
}

template <typename T>
T &LinkedList::remove(int index) {
    Node *&target = find(index);
    Node *temp = target;
    target = target->next;
    delete temp;
    return temp->data;
}