// Demo Scope resolution operator - Arith
#include <iostream>
using namespace std;
//#include<conio.h>

class Arith
{
	private :
		int a,b;
	public :
		// Declare member function prototype
	void getdata(int,int);
	void showdata();
	int add();
	int sub();
	int mul();
	int div();
}; // End of class

void Arith :: getdata(int x,int y)
{
	a=x;
	b=y;
}
void Arith :: showdata()
{
cout<<"A :"<<a<<"B :"<<b<<endl;
}

int Arith :: add()
{
	return a+b;
}

int Arith :: sub()
{
	return a-b;
}

int Arith :: mul()
{
	return a*b;
}
int Arith :: div()
{
	return a/b;
}




int main()
{
	
	int a,b;
	cout<<"Enter First No:";
	cin>>a;
	cout<<"Enter Second No:";
	cin>>b;
	Arith at; // at becomes an object of Arith
	at.getdata(a,b);
	at.showdata();
	cout<<"Addition:"<<at.add()<<endl;
	cout<<"Substraction:"<<at.sub()<<endl;
	cout<<"Multiplication:"<<at.mul()<<endl;
	cout<<"Division:"<<at.div()<<endl;

	
}
