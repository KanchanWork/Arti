// OOP program to read a No and print its reverse , find digital sum
#include <iostream>
using namespace std;


class Digit
{
	private :
		int n,temp;
	public :
		void getdata(int);
		void digireverse();
		int digisum();
};

// Definition of member function
void Digit:: getdata(int a)
{
	n=a;
	temp=n;
}
void Digit:: digireverse()
{

	while(n>0)
	{
		cout<<n%10;
		n/=10;// n=n/10
	}
}

int Digit ::digisum( )
{
	int sum=0;
	while(temp>0)
	{
		sum+=(temp%10);
		temp/=10;
	}
return sum;
}
int main()
{

	Digit dt;
	int n;
	cout<<"Enter any no :" <<endl;
	cin>>n;
	dt.getdata(n);
	cout<<"Reverse of a no :";
	dt.digireverse();
    
	cout<<'\n'<<"Digital sum :"<<dt.digisum()<<endl;


}
