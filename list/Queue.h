//
// Created by abel on 2/13/18.
//

#ifndef LIST_QUEUE_H
#define LIST_QUEUE_H

#include <ostream>

template<typename T>
class Queue {
public:
    Queue(int size = 16);

    bool isEmpty() { return count == 0; }

    void enqueue(T t);

    T dequeue();

    template <typename F>
    friend std::ostream &operator<<(std::ostream &os, const Queue<F> &queue);

    ~Queue();

private:
    T *item;
    int capacity;
    int count;
    int head;
    int tail;
    void resize();
};


#endif //LIST_QUEUE_H
