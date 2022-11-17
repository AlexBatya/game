#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "character.h"
 
 
class Engine
{
protected:
    sf::RenderWindow window;  //Эта шмонь для окна с королевством 
                                                                //гос-ва 
                                                    // собственное королевство -- своя полата и тд
    sf::Vector2f resolution;
    sf::Sprite BackgroundSprite;
    sf::Texture BackgroundTexture;

    sf::Event event;

    virtual void staticElem();
    virtual void input();
    virtual void update(float);
    virtual void draw();
 
public:
    Engine();
    sf::Sprite getSprite();
    sf::Vector2f getPosition();
 
    virtual void start();
 
};

class EnginePersone: public Engine{    //класс для персонажа, где нах главный персонаж 
private:
    King king;
    void staticElem();
    void input();
    void update(float) ;
    void draw();

public:
    EnginePersone();
    void start();
};

// class EngineMap: public Engine{
// private:

//     void staticElem();
//     void input();
//     void update(float);
//     void draw();

// public:
//     EngineMap();
//     void start();
// };
