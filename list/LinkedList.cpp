#include "LinkedList.h"

template <typename T>
void LinkedList<T>::insertAtFront(T &t) {
    Node *e = new Node(t);
    e->next = head;
    head = e;
}
//
//template<> void LinkedList<int>::insertAtFront(int &t) {
//    Node *e = new Node(t);
//    e->next = head;
//    head = e;
//}

template <typename T>
typename LinkedList<T>::Node *&LinkedList<T>::find(int index) const {
    Node *thru = head;
    for(int i=0;i<index-1;i++){
        thru = thru->next;
    }
    return thru->next;
}


template <typename T>
void LinkedList<T>::insert(T &t, int index) {
    Node *e = new Node(t);
    Node *&ptr = find(index);
    e->next = ptr;
    ptr = e;
}

template <typename T>
T & LinkedList<T>::get(int index) const {
    Node *&target = find(index);
    return target->data;
}

template <typename T>
T & LinkedList<T>::remove(int index) {
    Node *&target = find(index);
    Node *temp = target;
    target = target->next;
    delete temp;
    return temp->data;
}

template <typename T>
ostream& operator<<(ostream &os, const LinkedList<T> &li){
    typename LinkedList<T>::Node *e = li.head;
//    auto *e = li.head;
    if(e == nullptr){
        return os << "null" << endl;
    }
    os << e->data ;
    e = e->next;
    while(e != nullptr){
        os << " -> " << e->data;
        e = e->next;
    }
    os << "\t head is " << li.head->data << endl;
    return os;
}