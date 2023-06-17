// OOP - read name and print for 20 times
#include <iostream>
#include<string.h>
using namespace std;


class PrintMulti
{
	private :
		char nm[10];
	public :
		void getdata(char unm[])
	{
		strcpy(nm,unm);

	}
	void printname()
	{
        int i;
		for(i=1;i<=20;i++)
			cout<<i<<"     "<<nm<<endl;
	}

};



int main()
{

	char nm[10];
	cout<<"Enter Name :";
	cin>>nm;
	PrintMulti pm;
	pm.getdata(nm);
	pm.printname();


}
