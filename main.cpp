#include <iostream>
#include "game.h"

using namespace std;

int main(){
    game *Game; //creo un puntatore all'oggetto Game e da esso creo dinamicamente l'oggetto
    Game=new game;
    Game->inizio(); // faccio partire il gioco
    while (!Game->fine()){ // faccio eseguire i vari processi del gioco finch� nessuno ha vinto
        Game->esegui();
    }
    system("pause");
    return 0;
}
