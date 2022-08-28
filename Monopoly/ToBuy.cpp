#include "ToBuy.hpp"

ToBuy::ToBuy(){

}

ToBuy::ToBuy(int id, std::string name, sf::Color color, FIELDTYPE type, int price, int fine)
    :Field(id, name, color, type){
        isBought = false;
        isHipoteze = false;

        this->price = price;
        this->fine = fine;
    }

ToBuy::~ToBuy(){
    
}
void ToBuy::setOwner(int OwnewrId){
    idOwner = OwnewrId;
}