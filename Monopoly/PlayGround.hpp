#ifndef PLAYGROUND_HPP
#define PLAYGROUND_HPP

#include <iostream>
#include <vector>

#include "Field.hpp"
#include "ToBuy.hpp"
#include "City.hpp"
#include "Objects.hpp"
#include "Prison.hpp"
#include "Chance.hpp"
#include "Parking.hpp"


class PlayGround{
    public:

    std::vector<Field * > playground;

    PlayGround();
    ~PlayGround();
};

#endif