#include "square.h"
#include <iostream>
#include <ctime>
using namespace std;

namespace sq{

    square::square(){
        stopped=false;
        n=rand()%11+1;
        step=0;
        link=NULL;
    }

    void square::effect()
    {
        int i=rand()%20+1;
        int a;
        switch (n)
        {
            case 1:
                cout<<"   One step back"<<endl;
                step=-1;
                break;
            case 2:
                cout<<"   One step forward"<<endl;
                step=1;
                break;
            case 3:
                cout<<"   Skip your next turn"<<endl;
                stopped=true;
                break;
            case 4:
                cout<<"   Pick a card"<<endl;
                Card[i].effect(i);
                stopped=Card[i].Stopped();
                a = cin.get();
                break;
            case 5:
                cout<<"   Two steps back"<<endl;
                step=-2;
                break;
            case 6:
                cout<<"   Two steps forward"<<endl;
                step=2;
                break;
            case 7:
                cout<<"   Roll the dice again"<<endl;
                cout<<" "<<endl;
                int a=rand()%6+1, b=rand()%6+1;
                cout<<"   You have done "<<a<<" on the first die, and "<<b<< " on the second die"<<endl;
                step=a+b;
                break;
        }
    }

    int square::get_step(){
        return step;
    }

    bool square::get_stopped(){
        return stopped;
    }

    void square::set_link(square *new_){
        link=new_;
    }

    square* square::get_link(){
        return link;
    }
}





