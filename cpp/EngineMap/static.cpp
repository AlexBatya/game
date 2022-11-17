#include "../include/Engine.h"

void Engine::staticElem(){
    if(!sf::Event::KeyPressed) king.stopStatic();
    else king.notStopStatic();
}