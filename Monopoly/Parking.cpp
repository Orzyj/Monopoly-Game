#include "Parking.hpp"

Parking::Parking(){

}

Parking::Parking(int id, std::string name, sf::Color color, FIELDTYPE type, bool isPayment)
    :Field(id, name, color, type){
        this->isPayment = isPayment;
    }

Parking::~Parking(){

}