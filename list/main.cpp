#include <iostream>
#include "People.h"
#include <typeinfo>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Queue.h"
#include "Queue.cpp"

using namespace std;

/*a class for testing*/
class Integer {
public:
    static int total;

    Integer(int a) : value(a) {}

    Integer() : value(total) { total++; }

    // same functionality as toString in java, __str__ in python
    friend ostream &operator<<(ostream &os, const Integer &i);

private:
    int value;
};

int Integer::total = 0;

ostream &operator<<(ostream &os, const Integer &i) {
    os << i.value;
    return os;
}

int main() {

    /*test linked list, use class Integer*/
    LinkedList<Integer> l;
    Integer ints[15];
    for (int i = 0; i < 15; i++) {
        ints[i] = Integer(i);
        l.insertAtFront(ints[i]);
    }
    Integer temp(99);
    l.insert(temp, 2);
    l.insert(temp, 16);
    cout << l << endl;
    l.remove(16);
    l.remove(4);
    cout << l << endl;

    LinkedList<People> l2;


    /*test Linked list, use class people*/
    People *peo[15];
    for (int i = 0; i < 15; i++) {
        peo[i] = new People(i + 5);
        l2.insertAtFront(*peo[i]);
    }
    cout << "a break point " << endl;
    cout << l2 << endl;
    cout << l2.get(3) << endl;
    cout << l2 << endl;


    /*test Queue, use int class*/
    Queue<int> que;
    for (int i = 88; i < 120; i++) {
        que.enqueue(i);
    }
    cout << que << endl;
    for (int i = 123; i < 150; i++) {
        que.dequeue();
//        que.enqueue(i);
    }
    cout << que << endl;
//
//    /*test Queue, use Integer class*/
//    Queue<Integer> que2;
//    Integer *peo2[15];
//    for (int i = 0; i < 15; i++) {
//        peo2[i] = new Integer(i + 5);
////        cout << "break point 2" << endl;
//        que2.enqueue(*peo2[i]);
////        cout << "break point 3" << endl;
//    }
//    cout << que << endl;

    Queue<People> que2;
    People ppp(15,"hhhh");
    que2.enqueue(ppp);
//    People *peo2[15];
//    for (int i = 0; i < 15; i++) {
//        peo2[i] = new People(i + 5,"f");
//        cout << "break point 2" << endl;
//        cout << *peo2[i] << endl;
//        que2.enqueue(*peo2[i]);
//        cout << "break point 3" << endl;
//    }
//    cout << que << endl;

//    cout << que << endl;
    return 0;
}