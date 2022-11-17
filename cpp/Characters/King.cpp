#include "../../include/character.h"

King::King(){
    speedX = 200;
    speedY = 200;
    texture.loadFromFile("desktop/NinthKindom/img/lin.png");
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0,638,62,64));
    carrentFrame = 0;

    position.x = 10;
    position.y = 10;
}

void King::update(float elapsedTime)
{
    if(!c_stopStaticPressed){
        carrentFrame +=10*elapsedTime;
        std::cout<<carrentFrame<<std::endl;
        if(carrentFrame > 12) carrentFrame -=12;
        sprite.setTextureRect(sf::IntRect(int(carrentFrame)*70,638,70,64)); 
    }

    if (c_DownPressed)
    {
        position.y += speedY * elapsedTime;
        // carrentFrame +=10*elapsedTime;
        // std::cout<<carrentFrame<<std::endl;
        // if(carrentFrame > 9) carrentFrame -=9;
        // m_Sprite.setTextureRect(sf::IntRect(int(carrentFrame)*120,522,105,117));
        
    }

    if (c_UpPressed)
    {
        position.y -= speedY * elapsedTime;
        // carrentFrame +=10*elapsedTime;
        // std::cout<<carrentFrame<<std::endl;
        // if(carrentFrame > 9) carrentFrame -=9;
        // m_Sprite.setTextureRect(sf::IntRect(int(carrentFrame)*120,789,105,117));
        
    }

    if (c_RightPressed)
    {
        position.x += speedX * elapsedTime;
        // carrentFrame +=10*elapsedTime;
        // std::cout<<carrentFrame<<std::endl;
        // if(carrentFrame > 9) carrentFrame -=9;
        // m_Sprite.setTextureRect(sf::IntRect(int(carrentFrame)*120,921,105,117));
        
    }
 
    if (c_LeftPressed)
    {
        position.x -= speedX * elapsedTime;
        // carrentFrame += 10*elapsedTime;
        // std::cout<<carrentFrame<<std::endl;
        // if(carrentFrame > 9) carrentFrame -=9;
        // m_Sprite.setTextureRect(sf::IntRect(int(carrentFrame)*120,660,105,117));
    }
 
    sprite.setPosition(position);   
 
}
