#include<iostream>

using namespace std;


class shape

{
	protected:
		double area;
	public:
	void display();
};

class triangle : public shape
{
	protected:
		long height,breadth;
	public:
		void getdata()
		{
			cout<<"\n Enter height and breadth of the triangle :";
			cin>>height>>breadth;
		}
		
		void display()
		{
		   area=.5*height*breadth;
		   cout<<" \n Area is :"<<area;	
		}
};


class rectangle : public shape
{
	protected:
		long length,breadth;
	public:
		void getdata()
		{
			cout<<"\n  Enter length and breadth of rectangle : ";
			cin>>length>>breadth;
		}
		void display()
		{
			area=length*breadth;
			cout<<"\n area is : "<<area;
		}
		
};


int main()
{
	triangle t;
	t.getdata();
	t.display();
	rectangle r;
	r.getdata();
	r.display();
}


