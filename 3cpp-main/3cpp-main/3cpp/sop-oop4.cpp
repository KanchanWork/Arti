#include <iostream>
using namespace std;
#include<string.h>
void printname(char []);

int main()
{

	char nm[10];
	cout<<"Enter Your name :";
	cin>>nm;
	cout<<"Print name for 20 times "<<endl;
	printname(nm);

}

void printname(char nm[10])
{
	for(int i=1;i<=20;i++)
		cout<<i<<"    "<<nm<<endl;
}