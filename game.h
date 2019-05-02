#include "gamecontrol.h"

class game{
public:
    game();
    void inizio();
    void esegui();
    void vittoria();
    bool fine();
private:
    bool end;
    int length;
    gamecontrol *Gamecontrol;
};

