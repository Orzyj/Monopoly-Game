#include "Field.hpp"

Field::Field(){

}

Field::Field(int id, std::string name, sf::Color color, FIELDTYPE type){
    this->id = id;
    this->name = name;
    this->color = color;
    this->type = type;
}

Field::~Field(){

}