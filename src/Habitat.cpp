//
// Created by carlo on 25/03/2023.
//

#include "Animal.h"
#include "Habitat.h"
#include <vector>

Habitat::Habitat(string type): type_(type) {}

void Habitat::add_animal(Animal animal)
{
    Animals.push_back(animal);
}