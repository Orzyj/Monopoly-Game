#ifndef GAME_HPP
#define GAME_HPP

#include "librarys.hpp"
#include "PlayGround.hpp"

class Game{
    //private staff for window and handling//
    sf::RenderWindow * window;
    sf::VideoMode videoMode;
    sf::Event event;

    //game objects
    PlayGround playground;

    public:

    /**
    * @brief Construct a new Game object Setting videmode and creating RenderWIndow
    */
    Game();
    /**
     * @brief Destroy the Game object
     */
    ~Game();
    /**
     * @brief run app
     * 
     */
    void run();

    //basic function to handling window, events, drawing and updating//
    
    private:
    /**
     * @brief catching events and handling them
     */
    void poolEvent();
    /**
     * @brief updating staff
     */
    void update();
    /**
     * @brief rendering, otherwise is drawing staff
     */
    void render();
    /**
     * @brief returing bool if window is open(1) or not(0)
     * 
     * @return true 
     * @return false 
     */
    const bool isOpen() const;
};
#endif

