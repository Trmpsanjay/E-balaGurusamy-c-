#include<iostream>
using namespace std;


class person



{
	protected:
		char name[50];
		int code;
	public:
		void get_person_details()
		{
			cout<<"\n Enter Person  Namee : ";
			cin>>name;
			cout<<"\n Enter code : ";
			cin>>code;
		}
		void put_person_details()
		{
			cout<<" Name : "<<name;
			cout<<" Code : "<<code;
		}
	
};


class account:  virtual public person
{
	protected:
		float pay;
	public:
		void get_pay()
		{
			cout<<"\nEnter Pay :";
			cin>>pay;
		}
		void put_pay()
		{
			cout<<" Pay = "<<pay;
		}
 } ;
 
 
 class admin:  virtual public person
{
	protected:
		int experience;
		public:
	void get_experience()
	{
		cout<<"\n Enter experience in year : ";
		cin>>experience;
	}
	void put_experience()
	{
		cout<<" Experience in Years  : "<<experience;
	}
	
};


class master : public account,public admin
{
	public:
	void display()
	{
		put_person_details();
		put_pay();
		put_experience();
	}
};


int main()
{
	master m;
	m.get_person_details();
	m.get_pay();
	m.get_experience();
	m.display();
}
