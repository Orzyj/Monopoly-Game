#include "Objects.hpp"

Objects::Objects(){

}

Objects::Objects(int id, std::string name, sf::Color color, FIELDTYPE type, int price, int fine)
    :ToBuy(id, name, color, type, price, fine){

    }

Objects::~Objects(){

}