#include "Game.hpp"


Game::Game(){
    videoMode.height = HEIGHT;
    videoMode.width = WIDTH;

    window = new sf::RenderWindow(videoMode, "Monopoly", sf::Style::Titlebar | sf::Style::Close);
    window->setVerticalSyncEnabled(true);
    window->setFramerateLimit(60);
}

Game::~Game(){
    delete window;
}

void Game::run(){
    while(isOpen()){
        update();
        render();
    }
}

void Game::poolEvent(){
    while(window->pollEvent(event)){
        switch(event.type){
            case sf::Event::Closed:
                window->close();
                break;
        }
    }
}

void Game::update(){
    poolEvent();
}

void Game::render(){
    window->clear();
    
    //draw
    //
    window->display();
}

const bool Game::isOpen() const{
    return window->isOpen();
}