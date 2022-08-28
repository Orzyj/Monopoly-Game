#include "PlayGround.hpp"

PlayGround::PlayGround(){
    playground.push_back(new Field(1, "Start", sf::Color::White, FIELDTYPE::NONE));
    playground.push_back(new City(2, "Saloniki", sf::Color::Yellow, FIELDTYPE::CITY, 120, 5, 100));
    playground.push_back(new Chance(3, "Szansa", sf::Color::Blue, FIELDTYPE::NONE));
    playground.push_back(new City(4, "Ateny", sf::Color::Yellow, FIELDTYPE::CITY, 120, 10, 100));
    playground.push_back(new Parking(5, "Parking strzezony", sf::Color::White, FIELDTYPE::NONE, true));
    playground.push_back(new Objects(6, "Koleje południowe", sf::Color::White, FIELDTYPE::RAILWAY, 400, 50));
    playground.push_back(new City(7, "Neapol", sf::Color::Red, FIELDTYPE::CITY, 200, 15, 100));
    playground.push_back(new Chance(8, "Szansa", sf::Color::Red, FIELDTYPE::NONE));
    playground.push_back(new City(9, "Mediolan", sf::Color::Red, FIELDTYPE::CITY, 200, 15, 100));
    playground.push_back(new City(10, "Rzym", sf::Color::Red, FIELDTYPE::CITY, 240, 15, 100));
    playground.push_back(new Prison(11, "Wiezienie dla odwiedzajacych", sf::Color::Red, FIELDTYPE::NONE, false));
    playground.push_back(new City(12, "Barcelona", sf::Color::Blue, FIELDTYPE::CITY, 280, 20, 200));
    playground.push_back(new Objects(13, "Elektrownia Atomowa", sf::Color::White, FIELDTYPE::MEDIA, 300, 10));
    playground.push_back(new City(14, "Sewilla", sf::Color::Blue, FIELDTYPE::CITY, 280, 20, 200));
    playground.push_back(new City(15, "Madryt", sf::Color::Blue, FIELDTYPE::CITY, 320, 30, 200));
    playground.push_back(new Objects(16, "Koleje zachodnie", sf::Color::White, FIELDTYPE::RAILWAY, 400, 50));
    playground.push_back(new City(17, "Liverpool", sf::Color::Magenta, FIELDTYPE::CITY, 360, 30, 200));
    playground.push_back(new Chance(18, "Szansa", sf::Color::Blue, FIELDTYPE::NONE));
    playground.push_back(new City(19, "Glasgow", sf::Color::Magenta, FIELDTYPE::CITY, 320, 30, 200));
    playground.push_back(new City(20, "Londyn", sf::Color::Magenta, FIELDTYPE::CITY, 400, 40, 200));
    playground.push_back(new Parking(21, "Darmowy Parking", sf::Color::White, FIELDTYPE::NONE, false));
    playground.push_back(new City(22, "Rotterdam", sf::Color::Green, FIELDTYPE::CITY, 440, 40, 300));
    playground.push_back(new Chance(23, "Szansa", sf::Color::Red, FIELDTYPE::NONE));
    playground.push_back(new City(24, "Bruksela", sf::Color::Green, FIELDTYPE::CITY, 440, 40, 300));
    playground.push_back(new City(25, "Amsterdam", sf::Color::Green, FIELDTYPE::CITY, 480, 55, 300));
    playground.push_back(new Objects(26, "Koleje północne", sf::Color::White, FIELDTYPE::RAILWAY, 400, 50));
    playground.push_back(new City(27, "Malmo", sf::Color::Blue, FIELDTYPE::CITY, 520, 60, 300));
    playground.push_back(new City(28, "Goteborg", sf::Color::Blue, FIELDTYPE::CITY, 520, 60, 300));
    playground.push_back(new Objects(29, "Siec Wodociagowa", sf::Color::White, FIELDTYPE::MEDIA, 300, 10));
    playground.push_back(new City(30, "Sztokholm", sf::Color::Blue, FIELDTYPE::CITY, 560, 70, 300));
    playground.push_back(new Prison(31, "Idziesz do wiezienia", sf::Color::White, FIELDTYPE::NONE, true));
    playground.push_back(new City(32, "Frankfurt", sf::Color::Cyan, FIELDTYPE::CITY, 600, 80, 400));
    playground.push_back(new City(33, "Kolonia", sf::Color::Cyan, FIELDTYPE::CITY, 600, 80, 400));
    playground.push_back(new Chance(34, "Szansa", sf::Color::Blue, FIELDTYPE::NONE));
    playground.push_back(new City(35, "Bonn", sf::Color::Cyan, FIELDTYPE::CITY, 640, 90, 400));
    playground.push_back(new Objects(36, "Koleje wschodnie", sf::Color::White, FIELDTYPE::RAILWAY, 400, 50));
    playground.push_back(new Chance(37, "Szansa", sf::Color::Red, FIELDTYPE::NONE));
    playground.push_back(new City(38, "Insbruck", sf::Color::Black, FIELDTYPE::CITY, 700, 100, 400));
    playground.push_back(new Objects(39, "Podatek", sf::Color::White, FIELDTYPE::MEDIA, 0, 200));
    playground.push_back(new City(40, "Wieden", sf::Color::Black, FIELDTYPE::CITY, 800, 110, 400));
}

PlayGround::~PlayGround(){
    for(unsigned short i = 0; i < playground.size(); i++){
        delete playground[i];
        playground.erase(playground.begin() + i);
    }
}