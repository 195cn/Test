/*******************************************
 *File name     :perk.h
 *Author        :195cn
 *Descrpiton    :Fallout 76 perk.h
 *Date          :2018/11/1
 *Last date     :2018/11/1
 ******************************************/
#define S 0
#define P 1
#define E 2
#define C 3
#define I 4
#define A 5
#define L 6

char special_name[7] =
{
    'S','P','E','C','I','A','L'
};

typedef struct perk
{
    int num;
    int type;
    char *name;
    char *desc;
    int level;
    int star;
    struct perk *next;
}tPerk;

tPerk perk_list[]=
{
    {0,S,"Test","This is test perk",10,3,&perk_list[1]},
    {1,S,"Bandolier","Ammo weight 90%% less",0,3,NULL}
};

int showAll();
