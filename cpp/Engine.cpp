#include "../include/Engine.h"
 
Engine::Engine() {
    resolution.x = 1000;
    resolution.y = 1000;
 
    window.create(sf::VideoMode(resolution.x, resolution.y),"Kindom");
 
}

 
void Engine::start()
{
    sf::Clock clock;
 
    while (window.isOpen()){
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            } 
        }
        EnginePersone enginePersone;
        enginePersone.start(); 

        sf::Time dt = clock.restart();
        float dtAsSeconds = dt.asSeconds();
 
        // staticElem();
        // input();
        // update(dtAsSeconds);
        // draw();
    }
}
