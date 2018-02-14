//
// Created by abel on 2/13/18.
//

#include "People.h"

int People::total = 0;

People::People(int age, const string &name) : age(age), name(name) {
    total++;
}

int People::getAge() const {
    return age;
}

void People::setAge(int age) {
    this->age = age;
}

int People::getTotal() {
    return total;
}

void People::setTotal(int total) {
    People::total = total;
}

const string &People::getName() const {
    return name;
}

void People::setName(const string &name) {
    this->name = name;
}

const People People::operator=(const People &other) {
    this->name = other.name;
    this->age = other.age;
}

ostream &operator<<(ostream &os, const People &p) {
    os << "People[";
    os << "name:" << p.name;
    os << "  age:" << p.age;
    os << "  total:" << p.total;
    os << "]";
    return os;
}
