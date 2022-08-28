#ifndef CITY_HPP
#define CITY_HPP

#include "ToBuy.hpp"

class City : public ToBuy{
    public:
        int housePrice;
        int amountHouses;

        /**
         * @brief Construct a new City object
         */
        City();

        /**
         * @brief Construct a new City object
         * 
         * @param id 
         * @param name 
         * @param color 
         * @param type 
         * @param price 
         * @param fine 
         * @param housePrice 
         */
        City(int id, std::string name, sf::Color color, FIELDTYPE type, int price, int fine, int housePrice);

        /**
         * @brief Destroy the City object
         */
        ~City();

};

#endif