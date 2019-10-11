#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_number;
	public:
		void get_number(int a)
		{
			roll_number=a;
		}
		void put_number()
		{
			cout<<" Roll No :"<<roll_number<<endl;
		}
};


class test:  virtual public student
{
	protected:
		float part1,part2;
	public:
		void get_marks(float x,float y)
		{
			part1=x;
			part2=y;
		}
		void put_marks()
		{
			cout<<"Part 1 : "<<part1<<endl;
			cout<<"Part 2 : "<<part2<<endl;
		}
};



class sports : virtual public student
{
	protected:
		float score;
	public:
		void get_score(float s)
		{
			score=s;
		}
		void put_score()
		{
			cout<<"Sport wt :  "<<score<<endl;
		}
};

class Result:public test,public sports
{
	protected:
		float total;
	public:
		void display()
		{
			total=part1+part2+score;
			put_number();
			put_marks();
			put_score();
			cout<<"Total Score : "<<total<<endl;
		}
};


int main()
{
	Result s1;
	s1.get_number(543);
	s1.get_marks(76.6,67.9);
	s1.get_score(98.7);
	s1.display();
}
