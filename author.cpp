#include <iostream>
#include <string>
#ifndef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H
class Author {
private:

    std::string name;
    std::string surname;
    

public:
Author(): name(""), surname("") {};


Author (std::string name, std::string surname)
: name(name), surname(surname) {};

std::string getSurname() {
    return surname;
};

std::string getName() {
    return name;
};

std::string toString() {
    return name + " " + surname;
};

void print() {
    std::cout << name << " " << surname << std::endl;
};






};
#endif