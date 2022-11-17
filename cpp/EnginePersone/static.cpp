#include "../../include/Engine.h"

void EnginePersone::staticElem(){
    if(!sf::Event::KeyPressed) king.stopStatic();
    else king.notStopStatic();
}