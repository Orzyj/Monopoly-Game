#ifndef FIELD_HPP
#define FIELD_HPP

#include <string>
#include "librarys.hpp"

enum FIELDTYPE {CITY, RAILWAY, MEDIA, NONE};

class Field{
    public:
    
    int id;
    std::string name;
    sf::Color color;
    FIELDTYPE type;

    /**
     * @brief Construct a new Field object
     */
    Field();

    /**
     * @brief Construct a new Field object with variables
     */
    Field(int id, std::string name, sf::Color color, FIELDTYPE type);

    /**
     * @brief Destroy the Field object
     */
    ~Field();
};

#endif