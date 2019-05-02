#include "game.h"
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

using namespace std;

game::game(){
    end=false; // bool che mi segna se il gioco è finito o no
    length=0; // lunghezza campo
    Gamecontrol = new gamecontrol; // creo un oggetto che mi funge da intermediario tra le varie classi, quali player e square
}

void game::inizio(){
    srand(time(0));
    length=(rand() % 40) +20; // lunghezza campo randomica
    Gamecontrol->player_input(); //richiamo la funzione dell'oggetto Gamecontrol che permette l'inserimento dei giocatori
    Gamecontrol->new_grid(length); //richiamo la funzione dell'oggetto Gsmecontrol che permette la creazione dell tabellone randomico in base alla lunghezza del campo

}

void game::esegui(){

    if(Gamecontrol->who_is_playing()->getStop()){  // controlla che la persona che dovrebbe tirare in questo turno non sia ferma per effetto di una casella
        Gamecontrol->who_is_playing()->set_Stop(false); // nel caso lo sia faccio tornare il bool falso in modo tale da permettergli di giocare il prossimo turno
        Gamecontrol->next_player();
        return;
    }

    Gamecontrol->clear();
    Gamecontrol->draw_grid(length);
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;


    cout<<"   It's "<<Gamecontrol->who_is_playing()->getNick()<<"'s turn!"<<endl;
    cout<<"      die: roll the dies"<<endl;
    cout<<"      esc: quit the game"<<endl;

    string a;
    cout<<"      >> ";
    cin>>a;

    if(a=="die"){
        int die1=(rand() % 6)+1; //tira i dadi
        int die2=(rand() % 6)+1;

        cout<<"   You have done "<<die1<<" on the first die, and "<<die2<< " on the second die"<<endl;
        Gamecontrol->who_is_playing()->set_Data(die1+die2); // controlla se il giocatore ha vinto
        if (Gamecontrol->who_is_playing()->getData()>=length){
            vittoria();
            return;
        }

        int a= cin.get();
        cout<<" "<<endl;

        Gamecontrol->here(Gamecontrol->who_is_playing()->getData())->effect(); // attivo  gli effetti sulla casella
        Gamecontrol->who_is_playing()->set_Data(Gamecontrol->here(Gamecontrol->who_is_playing()->getData())->get_step()); //il giocatore prende l'effetto della casella
        Gamecontrol->who_is_playing()->set_Stop(Gamecontrol->here(Gamecontrol->who_is_playing()->getData())->get_stopped());

        if (Gamecontrol->who_is_playing()->getData()>=length){ // controllo se il giocatore ha vinto dopo aver applicato l'effetto della casella
            vittoria();
            return;
        }

        a = cin.get();


        Gamecontrol->next_player(); // passa ak giocatore successivo
    }
    else if(a=="esc"){
        end=true;
    }

}

void game::vittoria(){
    cout<<"   The winner is "<<Gamecontrol->who_is_playing()->getNick()<<endl;

    end=true;
}

bool game::fine(){
    return(end);
}
