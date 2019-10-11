#include<iostream>
using namespace std;


class Base
{
	public:
	void Display()
	{
		cout<<"display"<<endl;
	}
	virtual void show()
	{
		cout<<"Show Base \n ";
	}
};

class Derived :public Base
{
	public:
		void display()
		{
			cout<<"Display Derived \n";
		}
		void show()
		{
			cout<<"Show Derived \n";
		}
	
};
int main()
{
	Base b;
	Derived d;
	Base *bpt;
	cout<<"bpt pointer to base \n";
	bpt=&b;
	bpt->Display();
	bpt->show();
	cout<<"bpt pointers to derived\n";
	bpt=&d;
	bpt->Display();
	bpt->show();
	
	}
