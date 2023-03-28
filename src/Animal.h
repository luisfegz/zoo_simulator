//
// Created by carlo on 25/03/2023.
//

#ifndef ZOO_SIMULATOR_ANIMAL_H
#define ZOO_SIMULATOR_ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
private:
    string name_;
    string species_;
    string habitat_;


public:
    Animal(string name, string species, string habitat);

    void eat();

    void sleep();

    void play();

};


#endif //ZOO_SIMULATOR_ANIMAL_H
