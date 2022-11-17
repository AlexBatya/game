g++ -c draw.cpp ../Characters/King.cpp EnginePersone.cpp input.cpp update.cpp static.cpp ../character.cpp
ar -r libEnginePersone.a draw.o King.o EnginePersone.o input.o update.o static.o character.o
rm -rf draw.o King.o EnginePersone.o input.o update.o static.o character.o
mv libEnginePersone.a ../../lib