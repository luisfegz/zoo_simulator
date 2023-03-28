//
// Created by carlo on 28/03/2023.
//

#ifndef ZOO_SIMULATOR_ZOO_H
#define ZOO_SIMULATOR_ZOO_H
#include "Habitat.h"
#include <vector>


class Zoo {

private:
    vector<Habitat> habitats;

public:
    void add_habitat(Habitat habitat);
};
#endif //ZOO_SIMULATOR_ZOO_H
