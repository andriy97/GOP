#include "card.h"
#include <iostream>
#include <ctime>
using namespace std;

card::card(){
    Stop = false;
}

bool card::Stopped(){
    return Stop;
}

void card::effect(int n){
    int x;
    switch(n){
        case 1:
            cout<<"   What is the hottest planet in the universe?"<<endl;

            cout<<"      1) Mercury"<<endl;
            cout<<"      2) Venus"<<endl;
            cout<<"      3) Earth"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;
            cin>>x;

            if (x==2) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 2:
            cout<<"   Which of the following planets is without moons?"<<endl;

            cout<<"      1) Mercury and Mars"<<endl;
            cout<<"      2) Venus and Mars"<<endl;
            cout<<"      3) Mercury and Venus"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;


            cin>>x;

            if (x==3) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 3:
            cout<<"   How years old is the solar system?"<<endl;

            cout<<"      1) 3,6 billions years old"<<endl;
            cout<<"      2) 4,1 billions years old"<<endl;
            cout<<"      3) 4,6 billions years old"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==3) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }

            break;

        case 4:
            cout<<"   How wide is the Milky Way?"<<endl;

            cout<<"      1) 90'000 light years"<<endl;
            cout<<"      2) 105'000 light years"<<endl;
            cout<<"      3) 100'000 light years"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==3) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }

            break;

        case 5:
            cout<<"   Choose the right statement:"<<endl;

            cout<<"      1) The Sun is 300'000 times larger than Earth"<<endl;
            cout<<"      2) The Sun is 200'000 times larger than Earth"<<endl;
            cout<<"      3) The Sun is 240'000 times larger than Earth"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==1) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 6:
            cout<<"   The probability of being killed by spacial detritus is:"<<endl;

            cout<<"      1) 1 in 5 millions"<<endl;
            cout<<"      2) 1 in 50 millions "<<endl;
            cout<<"      3) 1 in 5 millions"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==3) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }

            break;

        case 7:
            cout<<"   What is the nearest galaxy to us?"<<endl;

            cout<<"      1) Sagittarius Dwarf Spheroidal Galaxy"<<endl;
            cout<<"      2) Andromeda"<<endl;
            cout<<"      3) Ursa Minor Dwarf"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==2) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 8:
            cout<<"   Who was the first man in space?"<<endl;

            cout<<"      1) Yuri Gagarin"<<endl;
            cout<<"      2) Neil Armstrong"<<endl;
            cout<<"      3) Buzz Aldrin"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==1) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 9:
            cout<<"   When did first man land on Moon?"<<endl;

            cout<<"      1)19 July 1969"<<endl;
            cout<<"      2)19 July 1968"<<endl;
            cout<<"      3)20 July 1969"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==3) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 10:
            cout<<"   What is the temperature in space?"<<endl;

            cout<<"      1) 0 Celsius degrees"<<endl;
            cout<<"      2) -270,15 Celsius degrees"<<endl;
            cout<<"      3) 4 Kelvin"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==2) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 11:
            cout<<"   What is the closest star to the Sun?"<<endl;

            cout<<"      1) Proxima Centauri"<<endl;
            cout<<"      2) Alpha Centauri A"<<endl;
            cout<<"      3) Alpha Centauri B"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==1) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 12:
            cout<<"   When was Pluto discovered?"<<endl;

            cout<<"      1) 1867"<<endl;
            cout<<"      2) 1930"<<endl;
            cout<<"      3) 1947"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==2) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 13:
            cout<<"   Quanto tempo impiega la luce ad arrivare dal Sole alla TerraHow long it takes the light to arrive on Earth?"<<endl;

            cout<<"      1) 7 minutes e 54 seconds"<<endl;
            cout<<"      2) 8 minutes e 19 seconds"<<endl;
            cout<<"      3) 9 minutes e 2 seconds"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==2) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 14:
            cout<<"   What is Jupiter's biggers moon?"<<endl;

            cout<<"      1) Ganymede"<<endl;
            cout<<"      2) Io"<<endl;
            cout<<"      3) Europa"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==1) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 15:
            cout<<"   The Sun represents ... of the mass in the solar system"<<endl;

            cout<<"      1) 90%"<<endl;
            cout<<"      2) 99%"<<endl;
            cout<<"      3) 99,8%"<<endl;


            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==3) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 16:
            cout<<"   What is the only planet in the solar system that rotates counterclockwise?"<<endl;

            cout<<"      1) Venus"<<endl;
            cout<<"      2) Saturn"<<endl;
            cout<<"      3) Neptune"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==1) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 17:
            cout<<"   What is Jupiter made of?"<<endl;

            cout<<"      1) Hydrogen and Helium"<<endl;
            cout<<"      2) Lithium and Beryllium"<<endl;
            cout<<"      3) Carbon and Magnesium"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==1) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 18:
            cout<<"   How many stars are there in Milky Way?"<<endl;

            cout<<"      1) 2-4 billions of stars"<<endl;
            cout<<"      2) 20-40 billions of stars"<<endl;
            cout<<"      3) 200-400 billions of stars"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==3) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 19:
            cout<<"   What is the only planet of the solar system which does not have the name of a divinity?"<<endl;

            cout<<"      1) Saturn"<<endl;
            cout<<"      2) Uranus"<<endl;
            cout<<"      3) None of the previous answers"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==3) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;

        case 20:
            cout<<"   What shape does the Earth have?"<<endl;
            cout<<"      1) The Earth is flat!"<<endl;
            cout<<"      2) The Earth is a geoid"<<endl;
            cout<<"      3) The Earth is a sphere"<<endl;

            cout<<"   Enter the number of the correct answer"<<endl;

            cin>>x;

            if (x==2) cout<<"   Correct answer, you are free to go";
            else {
                cout<<"   Skip your next turn and study!";
                Stop=true;
            }
            break;
    }
}


