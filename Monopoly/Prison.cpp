#include "Prison.hpp"

Prison::Prison(){

}

Prison::Prison(int id, std::string name, sf::Color color, FIELDTYPE type, bool forArrested)
    :Field(id, name, color, type) {
        this->forArrested = forArrested;
    }