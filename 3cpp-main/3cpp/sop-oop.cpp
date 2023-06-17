// OOP - Facto
#include <iostream>
using namespace std;
#include<conio.h>
// Define a class Facto
class Facto
{
	private :
		int n;
	public :
		void getdata(int no)
	{
		n=no;
	}
	void showdata(int n)
	{
		cout<<"n :"<<n<<endl;
	}
	int facto()
	{
		int f=1;
		while(n>0)
		{
			f*=n;
			n--;
		}
		return f;
	}
}; // End of class 




int main()
{
	
	int n;
	cout<<"Enter a no:";
	cin>>n;
	Facto ft;
	ft.getdata(n);
	ft.showdata(n);
	cout<<"Factorial :"<<n<<" = "<<ft.facto()<<endl;

}
