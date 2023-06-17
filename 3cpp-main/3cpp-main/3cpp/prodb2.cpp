// My Cpp Code 
// read a no to find 10 multiples of it
#include <iostream>
#include<iomanip>
#include<conio.h>
using namespace std;


int main()
{
	
	int n;
	cout<<"Enter a no:"<<endl;
	cin>>n;
	for(int i=1;i<=10;i++)
		cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
}
