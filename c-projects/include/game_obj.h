struct my_struct;

typedef struct my_struct GameObj;
typedef struct my_struct* GameObjp;

GameObjp create_objectp();
GameObj* create_object();

void print_int(GameObj* obj);
void print_intp(GameObjp obj);