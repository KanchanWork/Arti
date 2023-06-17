// Generate a Fibbonoci Series for User defined Terms 
// Addition of previous two terms , is equal to a current term
// 0 , 1 , 1 , 2,3,5.............
#include <iostream>
using namespace std;
class Fibbo
{
		private :
			int Ft,St,Tt;
		public :
			// Function prototypes
		void getdata(int,int,int);
		void generateFibbo();
}; // End of class 

// Member Function Definitions 
void Fibbo:: getdata(int a,int b,int c)
{
	Ft=a;
	St=b;
	Tt=c;
}

void Fibbo:: generateFibbo()
{
	cout<<Ft<<"  "<<St<<"  ";
	int Rt;
	for(int i=3;i<=Tt;i++)
	{
		Rt=Ft+St;
		cout<<Rt<<"  ";
		Ft=St;
		St=Rt;
	}
}



int main()
{
	
	Fibbo fb;
	int Ft,St,Tt;
	cout<<"Enter First Term :";
	cin>>Ft;
	cout<<"Enter Second Term :";
	cin>>St;
	cout<<"Enter Total Terms :";
	cin>>Tt;
	fb.getdata(Ft,St,Tt);
	fb.generateFibbo();
}
