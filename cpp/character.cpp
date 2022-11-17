#include "../include/character.h"


sf::Vector2f Character::getPosition(){return position;}

sf::Sprite Character::getSprite(){return sprite;}

void Character::moveRight(){c_RightPressed = true;}
void Character::moveLeft(){c_LeftPressed = true;}
void Character::moveDown(){c_DownPressed = true;}
void Character::moveUp(){c_UpPressed = true;}

void Character::stopStatic(){c_stopStaticPressed = true;}
void Character::notStopStatic(){c_stopStaticPressed = false;}

void Character::stopRight(){c_RightPressed = false;}
void Character::stopLeft(){c_LeftPressed = false;}
void Character::stopDown(){c_DownPressed = false;}
void Character::stopUp(){c_UpPressed = false;}



