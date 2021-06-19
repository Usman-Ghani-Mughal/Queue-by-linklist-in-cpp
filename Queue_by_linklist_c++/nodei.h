#include "node.h"

struct NodeImplementation
{
private:
	Node *HEAD;
	Node *TAIL;
	int SIZE;
public:
	NodeImplementation();
	void createQueue(int);//1
	void display();//2
	void enQueue(int);//3
	int  getSize();//4
	int deQueue();//5
	int peek();//6
	/*bool search(int);
	void removefirTOlast();
	void removelasttofir();
	void infopartExchange();
	int checkOcurance(int);
	void swapNthMth(int,int);
	void countNUmberGroups();
	void Staticstics();*/
};
/*
void create_list(int);
	void add_at_beg(int);
	void add_at_pos(int,int);
	void del(int);
	void display();
	int count();
	void rev();
	bool search(int);
	void removefirTOlast();
	void removelasttofir();
	void infopartExchange();
	int checkOcurance(int);
	void swapNthMth(int,int);
	void countNUmberGroups();
	void Staticstics();
*/