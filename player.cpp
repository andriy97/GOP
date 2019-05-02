#include<iostream>
#include<stdio.h>
#include<string.h>
#include"player.h"

namespace pr {
    player::player() : pos(0), link(NULL), stop(false){

    }

    int player::getData() const
    {
        return pos;
    }

    player* player::getLink() const
    {
        return link;
    }

    char* player::getNick()
    {
        return (nick);
    }

    void player::set_Data(int val)
    {

        pos=pos+val;
    }

    void player::set_Link(player *next)
    {
        link=next;
    }

    void player::set_Nick(char a[])
    {
        strcpy(nick,a);
    }

    void player::set_Stop(bool st){
        stop=st;
    }

    bool player::getStop(){
        return (stop);
    }

}
