// Structured/procedural Oriented program for finding factorial
// n!= n x n-1 x....1
#include <iostream>
using namespace std;

int facto(int);

int main()
{
	
	int n;
	cout<<"Enter a No :";
	cin>>n;
	cout<<"Factorial of "<<n<<" = "<<facto(n)<<endl;
	
}


int facto(int n)
{
	int f=1;
	while(n>0)
	{
		f*=n;
		n--;
	}
return f;

}
