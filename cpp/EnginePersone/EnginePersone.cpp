#include "../../include/Engine.h"

EnginePersone::EnginePersone(){

    resolution.x = 500;
    resolution.y = 500;

}

void EnginePersone:: start(){

    sf::Clock clock;

    while(window.isOpen()){
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed) window.close();
        }
    }

    sf::Time dt = clock.restart();
    float dtAsSeconds = dt.asSeconds();

    staticElem();
    input();
    update(dtAsSeconds);
    draw();
}