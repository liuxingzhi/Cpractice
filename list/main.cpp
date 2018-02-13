#include <iostream>
#include "People.h"
#include <typeinfo>
using namespace std;
int main() {
    People p;
    People p2;
    std::cout << "Hello, World!" << std::endl;
    cout << p << p2 << endl;
    cout << "type of age is " << typeof( p2.getName()) << endl;
    cout << p2 << endl;
    cout << p2 << endl;
    return 0;
}