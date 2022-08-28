#ifndef CHANCE_HPP
#define CHANCE_HPP

#include "Field.hpp"

class Chance : public Field{
    public:

        /**
         * @brief Construct a new Chance object
         */
        Chance();

        /**
         * @brief Construct a new Chance object
         * 
         * @param id 
         * @param name 
         * @param color 
         * @param type 
         */
        Chance(int id, std::string name, sf::Color color, FIELDTYPE type);

        /**
         * @brief Destroy the Chance object
         */
        ~Chance();
};

#endif