#ifndef OBJECTS_HPP
#define OBJECTS_HPP

#include "ToBuy.hpp"

class Objects : public ToBuy{
    public:

    /**
     * @brief Construct a new Objects {MEDIA, Railway} object
     */
    Objects();

    /**
     * @brief Construct a new Objects object
     * 
     * @param id 
     * @param name 
     * @param color 
     * @param type 
     * @param price 
     * @param fine 
     */
    Objects(int id, std::string name, sf::Color color, FIELDTYPE type, int price, int fine);

    /**
     * @brief Destroy the Objects object
     */
    ~Objects();
};

#endif