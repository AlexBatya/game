#include "../include/Engine.h"

void Engine::draw(){

// Стираем предыдущий кадр
    windowKindom.clear();
    windowPerson.clear();
    windowMap.clear();
 
    // Отрисовываем фон
    // windowKindom.draw(m_BackgroundSprite);
    windowPerson.draw(king.getSprite());
 
    // Отображаем все, что нарисовали
    windowKindom.display();
    windowPerson.display();
    windowMap.display();

}