cd EnginePersone 
    sh EnginePersone.sh
    cd .. 
g++ -c draw.cpp Characters/King.cpp Engine.cpp input.cpp update.cpp static.cpp character.cpp
    ar -r libEngine.a draw.o King.o Engine.o input.o update.o static.o character.o
rm -rf draw.o King.o Engine.o input.o update.o static.o character.o
mv libEngine.a ../lib/

