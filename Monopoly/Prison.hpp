#ifndef PRISON_HPP
#define PRISON_HPP

#include "Field.hpp"

class Prison : public Field{
    public:
        bool forArrested;

    /**
     * @brief Construct a new Prison object
     */
    Prison();

    /**
     * @brief Construct a new Prison object
     * 
     * @param id 
     * @param name 
     * @param color 
     * @param type 
     * @param forArrested 
     */
    Prison(int id, std::string name, sf::Color color, FIELDTYPE type, bool forArrested);

    /**
     * @brief Destroy the Prison object
     */
    ~Prison();

};

#endif