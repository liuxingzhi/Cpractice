//
// Created by abel on 2/13/18.
//

#include "Queue.h"
#include <iostream>

using namespace std;

template<typename T>
Queue<T>::Queue(int size) {
    capacity = size;
    item = new T[capacity];
    count = 0;
    head = 0;
    tail = 0;
}


template<typename T>
void Queue<T>::enqueue(T t) {
    if (count >= capacity) {
        cout << "resize!" << endl;
        resize();
    }
    item[tail] = t;
    count++;
    tail++;
    if (tail >= capacity) {
        tail = 0;
    }
}

template<typename T>
T Queue<T>::dequeue() {
    if (isEmpty()) {
        return NULL;
    }
    head++;
    if (head >= capacity) {
        head = 0;
    }
    count--;
    return item[head - 1];
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const Queue<T> &queue) {
    for (int i = 0; i < queue.capacity; i++) {
        os << queue.item[i] << " -- ";
    }
    os << "\n";
    os << "item: " << queue.item;
    os << " capacity: " << queue.capacity << " count: " << queue.count << " head: "
       << queue.head << " tail: " << queue.tail;
    return os;
}

template<typename T>
void Queue<T>::resize() {
    T *temp = new T[capacity * 2];
    int i = 0;
    while (!isEmpty()) {
        temp[i] = dequeue();
    }
    delete[] item;
    item = temp;
    head = 0;
    tail = i;
    capacity *= 2;
}

template<typename T>
Queue<T>::~Queue() {
    delete[] item;
}