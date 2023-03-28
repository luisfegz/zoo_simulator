//
// Created by carlo on 25/03/2023.
//

#ifndef ZOO_SIMULATOR_DESERT_H
#define ZOO_SIMULATOR_DESERT_H

#include "Habitat.h"

class Desert : public Habitat {

public:
    Desert(double temperature);

private:
    double temperature_;
};


#endif //ZOO_SIMULATOR_DESERT_H
