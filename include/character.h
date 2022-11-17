#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Character{
protected:
    sf::Texture texture;
    sf::Sprite sprite;
    sf::Vector2f position;
    float speedX;
    float speedY;

    bool c_RightPressed;
    bool c_LeftPressed;
    bool c_DownPressed;
    bool c_UpPressed;
    bool c_stopStaticPressed;
    float carrentFrame;

public:
    sf::Vector2f getPosition();
    sf::Sprite getSprite();

    void moveRight();
    void moveLeft();
    void moveDown();
    void moveUp();

    void stopRight();
    void stopLeft();
    void stopDown();
    void stopUp();

    void stopStatic();
    void notStopStatic();

};

class King: public Character{
public:
    King();
    void update(float);
};