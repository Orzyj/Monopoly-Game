#ifndef TOBUY_HPP
#define TOBUY_HPP

#include "Field.hpp"

class ToBuy : public Field{
    public:

    bool isBought;
    bool isHipoteze;
    int price;
    int fine;
    int idOwner;

    /**
     * @brief Construct a new To Buy object
     */
    ToBuy();

    /**
     * @brief Construct a new To Buy object
     * 
     * @param id 
     * @param name 
     * @param color 
     * @param type 
     * @param price 
     * @param fine 
     * 
     * inheretion to Field
     */
    ToBuy(int id, std::string name, sf::Color color, FIELDTYPE type, int price, int fine);

    /**
     * @brief Destroy the To Buy object
     */
    ~ToBuy();

    /**
     * @brief Set the Owner object
     * @param OwnewrId owner id
     */
    void setOwner(int OwnewrId);
};

#endif