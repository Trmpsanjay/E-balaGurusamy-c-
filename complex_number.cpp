#include<iostream>

using namespace std;

class complex
{
	private:
		float x,y;
	public:
		complex(){}
		
	complex(float real,float imag)
		{
			x=real;
			y=imag;
		}
		complex operator +(complex c)
		{
			complex temp;
			temp.x=x+c.x;
			temp.y=y+c.y;
			return temp;
		}
		void display()
		{
			cout<<x<<"+j"<<y<<endl;
		}
};


int main()
{

complex	c1(2.5,9.5),
	c2(5.5,8.5);
	complex c3=c1+c2;
	c1.display();
	c2.display();
	c3.display();
}
