#include<iostream>

using namespace std;

class swaping
{
	private:
		int *ptr1,*ptr2;
	public:
		void swap_number(int a,int b)
		{
			ptr1=&a;
			ptr2=&b;
			int temp=*ptr1;
			*ptr1=*ptr2;
			*ptr2=temp;
			cout<< "Swap value is :"<<endl<<"a="<<a<<"\nb = "<<b;
		}
		
};


int main()
{
	swaping s;
	s.swap_number(5,4);
	
}
