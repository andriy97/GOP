#include "card.h"

namespace sq{
    class square{
    public:
        square();
        void effect();
        square *get_link();
        void set_link(square *new_);
        int get_step();
        bool get_stopped();
    private:
        int n;
        int step;
        bool stopped;
        square *link;
        card Card[20];
    };
    typedef square* squareptr;
}
