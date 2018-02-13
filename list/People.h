//
// Created by abel on 2/13/18.
//

#ifndef LIST_PEOPLE_H
#define LIST_PEOPLE_H

#include <string>
#include <iostream>
using namespace std;
class People {
public:
    People(int age = 10, const string &name = "Felix");

    int getAge() const;

    void setAge(int age);

    const string &getName() const;

    void setName(const string &name);

    friend ostream &operator<<(ostream &os, const People &p);

    static int getTotal();

    static void setTotal(int total);

    static int total;

    const People operator=(const People &other);
private:
    int age;
    string name;
};


#endif //LIST_PEOPLE_H
