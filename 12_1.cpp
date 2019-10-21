#include<iostream>
using namespace std;

template <class t1,class t2>


float greater_number(t1 x,t2 y)
{
	if(x>y)
	return x;
	else
	return y;
}


int main()
{
cout<<greater_number(10,9.67)<<endl;
cout<<greater_number(5,7.9)<<endl;
cout<<greater_number(7.9,12)<<endl;

	
	
	
}
