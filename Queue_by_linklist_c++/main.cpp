#include <iostream>
#include "nodei.h"
using namespace std;

int main()
{
	int choice,n,m,position,i;
	NodeImplementation obj;
	while(1)
	{
		cout<<endl<<"1. Create List"<<endl;
		cout<<"2. EnQueue"<<endl;
		cout<<"3. DeQueue"<<endl;
		cout<<"4. Display"<<endl;
		cout<<"5. ShowSize"<<endl;
		cout<<"6. PEEK"<<endl;
		cout<<"Enter ur choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"How many nodes u want:"<<endl;
				cin>>n;
				for(i=0;i<n;i++)
				{
					cout<<"Enter the element"<<endl;
					cin>>m;
					obj.createQueue(m);
				}
				break;
			case 2:
				{
					cout<<"Enter the element"<<endl;
					cin>>m;
					obj.enQueue(m);
					break;
				}
			case 3:
				{
					cout<<"This : "<<obj.deQueue()<<" came out from Queue"<<endl;
					break;
				}
			case 4:
				{
					obj.display();
					break;
				}
			case 5:
				{
					cout<<"List Size : "<<obj.getSize();
					break;
				}
				
			case 6:
				{
					cout<<endl<<"This is On the Head : "<<obj.peek()<<endl;
					break;
				}
				
			default:
				cout<<"Wrong choice"<<endl;
		}
	}
	return 0;
}