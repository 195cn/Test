//声明PLAYER类

struct PLAYER
{
	char name[10];
	int health;
	int attack;
	int speed;
};

//给角色赋值
void addplayer(struct PLAYER *a,char *name,int health,int attack,int speed);
//输出角色信息
void outputplayer(struct PLAYER *a);
//a攻击b
int fight(struct PLAYER *a,struct PLAYER *b);
//a先手发起斗一回合
int fighttime(struct PLAYER *a,struct PLAYER *b);
//a和b战斗一回合
int battle(struct PLAYER *a,struct PLAYER *b);
