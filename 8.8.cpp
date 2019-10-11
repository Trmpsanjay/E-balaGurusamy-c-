#include<iostream>
using namespace std;

	void general_info()
		{
		cout<<"\n The Shop has following products";
		cout<<" Electronics appliances "<<endl<<"Food items "<<endl<<"Clothing "<<endl<< " Milk Product "<<"Kitchen "<<endl;
	    }

class shop
{
	protected:
		char product_name[50],product_company[50];
		int price,stock;
	public:
	
	    void display()
	    {
	    	cout<<" \n product Name : "<<product_name;
	    	cout<<"\n product company : "<<product_company;
	    	cout<<"\n Stock : "<<stock;
	    	cout<<"\n Price : "<<price;
		}
			void get_details()
		{
			cout<<"\n Enter product Name :";
			cin>>product_name;
			cout<<"\n Enter product company : ";
			cin>>product_company;
			cout<<"\n enter product stock : ";
			cin>>stock;
			cout<<"\n enter price : ";
			cin>>price;
			
		}
};

class electronics : public shop
{
	public:
	electronics()
	{
		cout<<"This is Electronics Items"<<endl;
	}
};

class food : public shop
{
	public:
		food()
		{
			cout<<"This is food Section ";
		}
};

class clothing : public shop
{
	public:
		clothing()
		{
			cout<<"\n This is clothing section ";
		}
};

class milk : public shop
{
	public:
	milk()
	{
		cout<<"This is milk section ";
	}
};

class kitchen : public shop
{
	public:
		kitchen()
		{
			cout<<"\n This is kitchen Section";
		}
};



int main()
{
	general_info();
	electronics e;
	e.get_details();
	food f;
	f.get_details();
	kitchen k;
	k.get_details();
	milk m;
	m.get_details();
	clothing k1;
	k1.get_details();
	e.display();
	f.display();
	k.display();
	m.display();
	k1.display();
	
}
