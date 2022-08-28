#ifndef PARKING_HPP
#define PARKING_HPP

#include "Field.hpp"

class Parking : public Field{
    public:
    bool isPayment;

    /**
     * @brief Construct a new Prison object
     */
    Parking();

    /**
     * @brief Construct a new Prison object
     * 
     * @param id 
     * @param name 
     * @param color 
     * @param type 
     * @param isPayment 
     */
    Parking(int id, std::string name, sf::Color color, FIELDTYPE type, bool isPayment);

    /**
     * @brief Destroy the Prison object
     */
    ~Parking();
};

#endif