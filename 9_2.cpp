#include<iostream>

using namespace std;


class shape

{
	protected:
		double length,breadth;
	public:
	void display( );
		void getdata(long a,long b)
		{
			length=a;
			breadth=b;
		}
};

class triangle : public shape
{
	public:
	
		
		long display()
		{
		   return (.5*length*breadth);
		   
		}
};


class rectangle : public shape
{
	public:
	//	void getdata(long c,long d)
	//	{
	//	length=c;
	//	breadth=d;
	//	}
		long display()
		{
			return (length*breadth);
			
		}
		
};

class circle: public shape
{
	public:
		float display()
		{
			return (3.14*length*length);
		}
};


int main()
{
	triangle t;
	t.getdata(4.0,8.0);
	cout<<" \n Area is :"<<t.display();
	rectangle r;
	r.getdata(6.0,8.0);
	 cout<<" \n Area is :"<<r.display();
	 circle c;
	 c.getdata(5.0,0.0);
	 cout<<" \n Area is :"<<c.display();
	 
	 
}


