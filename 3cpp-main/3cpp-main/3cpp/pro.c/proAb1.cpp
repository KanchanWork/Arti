//read name age to checking voting eligibility
#include<iostream>
using namespace std;
int main()
{
    char nm[20];
    int age;
    
    cout<<"Enter the name :";
    cin>>nm;
    
    cout<<"Enter the age:";
    cin>>age;
if(age>=18)
{
    cout<<nm<<"\tis eligibal for voting and age is\t "<<age<<endl;
}
else
{
    cout<<nm<<"is not eligible for voting";
}
return 0;
}