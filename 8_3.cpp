#include<iostream>
using namespace std;


class staff
{
	protected:
		int code;
		char name[60];
	public:
		void getdata()
		{
			cout<<"Enter the employee code : ";
			cin>>code;
			cout<<"Enter the name : \n";
			cin>>name;
		}
		void put_staff_details()
		{
			cout<<" Employee code :"<<code<<endl;
			cout<<"Employee Name  : "<<name<<endl;
		}
};

class typist: public staff
{
	protected :
		int speed;
	public:
		void get_speed()
		{
			cout<<"Enter Typing speed : ";
			cin>>speed;
		}
		void put_speed()
		{
			cout<<"\n The typing speed is : "<<speed;
		}
};
class teacher : public staff
{
	protected:
		char subject[40];
		char publication[50];
	public:
		void get_teacher_details()
		{
			cout<<"Enter Subject name : ";
			cin>>subject;
			cout<<"\n Enter Publication Name : ";
			cin>>publication;
		}
		
		void put_teacher_details()
		{
			cout<<"\n Teacher Subject :  "<<subject;
			cout<<"\n Subject Publication :  "<<publication;
		}
};


class officer : public staff
{
	protected:
		char  grade[50];
	public:
		void get_grade()
		{
			cout<<"\n Enter Grade :  ";
			cin>>grade;
		}
		
		void put_grade()
		{
			cout<<"\n Grade :  ";
		}
};


class regular : public typist
{
	public:
		void regular_display()
		{	
			cout<<"\n This is on Regular Basis";
		}
};


class casual : public typist
{
	public:
		void casual_display()
		{
			cout<<"\n It is a casual staff";
		}
};



int main()
{
	int m;
	cout<<"\n Enter 1 to  feed details about teacher : ";
	cout<<"\n Enter 2 to  feed  details about officer : ";
	cout<<"\n Enter 3 to feed details about typist  : ";
	cin>>m;
	switch(m)
	{
		case 1:
			teacher t;
			t.getdata();
			t.get_teacher_details();
			t.put_staff_details();
			t.put_teacher_details();
			break;
		case 2:
			officer o;
			o.getdata();
			o.get_grade();
			o.put_staff_details();
			o.put_grade();
			break;
		case 3:
			casual c;
		
			cout<<"\n Enter 1 for regular typist : ";
			cout<<"\n Enter 2 for casual typist :  ";
			int q;
			cin>>q;
			if(q==1)
			{
				regular r;
				r.getdata();
				r.get_speed();
				r.put_staff_details();
				r.put_speed();
				r.regular_display();
			}
			else
			
			
			c.getdata();
			c.get_speed();
			c.put_staff_details();
			c.put_speed();
			c.casual_display();
			break;
				
			}
	
}
