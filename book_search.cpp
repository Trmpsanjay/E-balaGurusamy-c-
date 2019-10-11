#include<iostream>
#include<string.h>
using namespace std;
class book
{
	private:
		char author[50][50];
		char title[50][50];
		char publisher[50][50];
		int stock[50],n,i,copies;
		float price[50],total;
	public:
		void get_details()
		{
			cout<<"enter no of books"<<endl;
			cin>>n;
			for(i=0;i<n;i++)
			{
			cout<<"enter author name";
			cin>>author[i];
			cout<<"enter title"<<endl;
			cin>>title[i];
			cout<<"enter publisher"<<endl;
			cin>>publisher[i];
			cout<<"enter price"<<endl;
			cin>>price[i];
			}
		}
		void display()
		{
			for(i=0;i<n;i++)
			{
				cout<<"Title :"<<title[i]<<endl;
				cout<<"Author : "<<author[i]<<endl;
				cout<<"Publisher :"<<publisher[i]<<endl;
				cout<<"Price :"<<price[i]<<endl;
				
			}
		}
		void search(char a[],char b[])
		{
		
		 for(i=0;i<n;i++)
		 {
		 	if(strcmp(a,title[i])==0 &&strcmp(b,author[i])==0)
		 	{
		 	cout<<"Books available "<<endl;
			cout<<"Title :"<<title[i]<<endl;
			cout<<"author :"<<author[i]<<endl;
			cout<<"Publisher :"<<publisher[i]<<endl;
			cout<< "Price :"<<price[i]<<endl;
			cout<<"enter no of copies you want :"<<endl;
			cin>>copies;
			total=copies*price[i];
			cout<<"Total Price = "<<total;	
			}
			else
			cout<<"Book not availbe;"<<endl;
			
		 }
		}
};
int main()
{
	book b;
	char p[50],q[50];
	b.get_details();
	b.display();
	 cout<<"enter the title to be serached"<<endl;
		 cin>>p;
		 cout<<"enter the author name"<<endl;
		 cin>>q;
	b.search(p,q);
}
