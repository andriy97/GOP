#include "player.h"
#include "square.h"

using namespace sq;
using namespace pr;

class gamecontrol{
public:
    gamecontrol ();
    void clear();
    void player_input();
    squareptr here(int pos);
    void new_grid(int l);
    playerptr who_is_playing();
    void next_player();
    void new_player(playerptr& start, char s[], int& i);
    int get_n_players();
    void draw_grid(int squares);
protected:
    int n_players;
    playerptr head, playing;
    squareptr up,here_;
};
