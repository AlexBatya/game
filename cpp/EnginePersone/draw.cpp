#include "../../include/Engine.h"

void EnginePersone::draw(){

// Стираем предыдущий кадр
    window.clear();
 
    window.draw(king.getSprite());
 
    // Отображаем все, что нарисовали
    window.display();

}