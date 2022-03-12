#include <stdio.h>
#include <stdlib.h>
#include "game_obj.h"

//////////////////////////////////////////
struct my_struct{
    int mi;
    float mf;
    char mc;
};
//////////////////////////////////////////

GameObj* create_object() {
    GameObj* bb = malloc(sizeof(GameObj));
    bb->mi = 189;
    bb->mf = 11.3;
    bb->mc = 'b';
    return bb;
}

GameObjp create_objectp() {
    GameObjp bb = malloc(sizeof(bb));
    bb->mi = 189;
    bb->mf = 11.3;
    bb->mc = 'b';
    return bb;
}

void print_int(GameObj* obj) {
    printf("%d\n", obj->mi);
}

void print_intp(GameObjp obj) {
    printf("%d\n", obj->mi);
}
