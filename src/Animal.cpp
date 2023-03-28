//
// Created by carlo on 25/03/2023.
//

#include "Animal.h"


Animal::Animal(string name, string species, string habitat): name_(name), species_(species), habitat_(habitat) {}

void Animal::eat() {
    cout << name_ << " is eating.\n";
}

void Animal::sleep() {
    cout << name_ << " is sleeping.\n";
}

void Animal::play()
{
    cout << name_ << " is playing.\n";
}

