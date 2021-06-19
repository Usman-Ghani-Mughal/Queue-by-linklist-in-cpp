#include <iostream>
#include "nodei.h"
using namespace std;

NodeImplementation::NodeImplementation()
{
	this->SIZE=0;
	this->HEAD=NULL;
	this->TAIL=NULL;
}
void NodeImplementation::createQueue(int d)
{
	if(this->HEAD==NULL)
	{
		Node *temp=new Node();
		temp->DATA=d;
		temp->NEXT=NULL;
		this->HEAD=temp;
		this->TAIL=this->HEAD->NEXT;
		this->SIZE++;
		cout<<"***** Data has been stored by c1 *****"<<endl;
	}
	else
	{
		Node *move=this->HEAD;
		while(move->NEXT!=NULL)
		{
			move=move->NEXT;
		}
		Node *temp=new Node();
		temp->DATA=d;
		temp->NEXT=NULL;
		this->TAIL=temp->NEXT;
		move->NEXT=temp;
		this->SIZE++;
		cout<<"***** Data has been stored by c2 *****"<<endl;
	}
}
void NodeImplementation::enQueue(int d)
{
	Node *temp=new Node();
	temp->DATA=d;
	temp->NEXT=NULL;
	if(this->HEAD==NULL)
	{
		this->HEAD=temp;
		this->TAIL=this->HEAD->NEXT;
		this->SIZE++;
		cout<<"***Data has been stored in Queue****"<<endl;
	}
	else
	{
		Node *move=this->HEAD;
		while(move->NEXT!=NULL)
		{
			move=move->NEXT;
		}
		move->NEXT=temp;
		this->TAIL=move->NEXT->NEXT;
		this->SIZE++;
		cout<<"***Data has been stored in Queue****"<<endl;
	}
}
void NodeImplementation::display()
{
	Node *move=this->HEAD;
	while(move!=NULL)
	{
		cout<<move->DATA<<" ";
		move=move->NEXT;
	}
}
int  NodeImplementation::getSize()
{
	return this->SIZE;
}
int NodeImplementation::deQueue()
{
	if(this->HEAD==NULL)
	{
		cout<<"Queue is Already Empty"<<endl;
		return 0;
	}
	else
	{ 
		int n;
		Node *temp=this->HEAD;
		this->HEAD=this->HEAD->NEXT;
		this->SIZE--;
		n=temp->DATA;
		delete temp;
		return n;
	}
	
}
int NodeImplementation::peek()
{
	if(this->HEAD==NULL)
	{
		cout<<"List is already Empty!!!"<<endl;
		return 0;
	}
	else
	{
		return this->HEAD->DATA;
	}
}
/*bool NodeImplementation::search(int);
void NodeImplementation::removefirTOlast();
void NodeImplementation::removelasttofir();
void NodeImplementation::infopartExchange();
int  NodeImplementation::checkOcurance(int);
void NodeImplementation::swapNthMth(int,int);
void NodeImplementation::countNUmberGroups();
void NodeImplementation::Staticstics();*/