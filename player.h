#include <string.h>

namespace pr{
    class player
    {
    public:
        player();
        int getData() const;
        player *getLink() const;
        char *getNick();
        bool getStop();
        void set_Data(int val);
        void set_Stop(bool st);
        void set_Nick(char a[]);
        void set_Link(player *next);
    protected:
        int pos;
        player *link;
        char nick[20];
        bool stop;
    };
    typedef player* playerptr;
}
