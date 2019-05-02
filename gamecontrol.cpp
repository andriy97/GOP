#include "gamecontrol.h"
#include <iostream>

using namespace std;

gamecontrol::gamecontrol(){
    n_players=0;
    head=NULL;
    playing=NULL;
    up=NULL;
    here_=NULL;
};



void gamecontrol::new_player(playerptr& start, char s[], int& i){ //funzione che mi permette di inserire giocatori ad una lista
    playerptr new_;
    new_= new player;
    playerptr search;
    bool not_find=true;
    new_->set_Nick(s);
    for (search=start; search!=NULL && not_find; search=search->getLink()){ //controlla che non ci siano nomi uguali
        if (strcoll((new_->getNick()),(search->getNick()))==0) not_find=false;
    }
    if (not_find)
    {
        new_->set_Link(start);
        start=new_;
    }
    else
    {
        cout<<"error, insert another nick: "<<endl;
        i=i-1;
        delete new_;
    }
}

playerptr gamecontrol::who_is_playing(){ // ritorna il puntatore alla lista su chi sta giocando
    return playing;
}

void gamecontrol::next_player(){ //funzione che scorre la lista, quando arriva alla fine riparte dalla testa
    if(playing->getLink()==NULL){
        playing=head;
    }
    else{
        playing=playing->getLink();
    }
}


void gamecontrol::player_input(){ //funzione per l'inserimento del numero di giocatori e relativi nomi
    cout<<"insert number of players (2-4) : ";
    cin>>n_players;
    bool ok=false;
    while (!ok){
        if (n_players==2 || n_players==3 || n_players==4){
            for (int h=0; h<n_players; h++){
                cout<<"insert nick of player "<<(h+1)<<" : ";
                char s[20];
                cin>>s;
                new_player(head, s, h);
            }
            ok=true;
        } else {
            cout<<"invalid input"<<endl;
            cout<<"insert number of players (2-4) : ";
            cin>>n_players;
        }
    }
    playing=head;
}


void gamecontrol::new_grid(int l){  //creazione di una lista di oggetti "casella" lunga l
    for(int i=0; i<l; i++){
        if (up==NULL){
            up=new square;
        } else {
            squareptr new_;
            new_=new square;
            new_->set_link(up);
            up=new_;
        }
    }
}

squareptr gamecontrol::here(int pos){ //ritorna la casella su cui è il giocatore
    here_=up;
    for(int i=1; i<pos; i++){
        here_=here_->get_link();
    }
    return here_;
}

int gamecontrol::get_n_players(){
    return n_players;
}

void gamecontrol::draw_grid(int squares){ //disegna la griglia sul terminale
    cout<<endl;
    int b,j=0;
    int a[4];
    a[0]=-1;
    a[1]=-1;
    a[2]=-1;
    a[3]=-1;
    for (playerptr iter=head; iter!=NULL; iter=iter->getLink()){
        a[j]=iter->getData();
        j++;
    }
    char w = ' ', x = ' ', y = ' ', z = ' ';
    do {
        cout<<"   ";
        if (squares < 10){ //parte superiore caselle
            b=squares;
        } else{
            b=10;
        }
        for (int i=0; i<b; i++) {
            cout <<" _____    ";
        }cout<<endl;

        cout<<"   ";
        for(int i = 0; i < b ; i++){ //parte alta centrale
            if (a[0] == 0){
                w = '1';
                a[0]--;
            }else{
                a[0]--;
            }
            if (a[1] == 0){
                x = '2';
                a[1]--;
            }else{
                a[1]--;
            }
            cout << "| "<< w << " " << x << " |   ";
            w = ' ';
            x = ' ';
        }
        cout << endl;
        cout<<"   ";
        for(int i = 0; i < b ; i++){ // parte bassa centrale
            if (a[2]== 0){
                y = '3';
                a[2]--;
            }else{
                a[2]--;
            }
            if (a[3] == 0){
                z = '4';
                a[3]--;
            }else{
                a[3]--;
            }
            cout << "| "<< y << " " << z << " |   ";
            y = ' ';
            z = ' ';
        }
        cout << endl;
        cout<<"   ";

        for(int i = 0; i < b ; i++){ //parte inferiore caselle
            cout << "|_____|   ";
        }cout << endl;

        squares = squares - b;

    } while (squares > 0);
}

void gamecontrol::clear(){ //funzione grafica per ripulire lo schermo dai precedenti input/outut
#ifdef __unix__
    system("clear");
#endif

#ifdef _WIN32
    system("cls");
#endif

}
