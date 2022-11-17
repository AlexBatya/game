#include "../../include/Engine.h"

void EnginePersone::input(){
    if(event.key.code == sf::Keyboard::Escape) {
        window.close();
        std::cout<<"Окно закрыто"<<std::endl;
    }

    if(event.key.code == sf::Keyboard::A) king.moveLeft();
    else king.stopLeft();

    if(event.key.code == sf::Keyboard::D) king.moveRight();
    else king.stopRight();

    if(event.key.code == sf::Keyboard::W) king.moveUp();
    else king.stopUp();

    if(event.key.code == sf::Keyboard::S) king.moveDown();
    else king.stopDown();
}