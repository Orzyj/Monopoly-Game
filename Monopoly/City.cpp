#include "City.hpp"

City::City(){

}

City::City(int id, std::string name, sf::Color color, FIELDTYPE type, int price, int fine, int housePrice)
    :ToBuy(id, name, color, type, price, fine){
        amountHouses = 0;
        
        this->housePrice = housePrice;
    }