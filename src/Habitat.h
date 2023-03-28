//
// Created by carlo on 25/03/2023.
//

#ifndef ZOO_SIMULATOR_HABITAT_H
#define ZOO_SIMULATOR_HABITAT_H

#include "Animal.h"
#include <vector>

class Habitat{

private:
    string type_;
    vector<Animal> Animals;


public:
    Habitat(string type);
    void add_animal(Animal animal);

};

#endif //ZOO_SIMULATOR_HABITAT_H