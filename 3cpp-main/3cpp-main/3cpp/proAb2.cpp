//read a no and check prime or not
#include<iostream>
using namespace std;
int main()
{
    int no,i,count=0;
    cout<<"Enter the no:";
    cin>>no;
    for(i=1;i<=no;i++)
    {
    if(no%i==0)
    {
       count++;
        
    }
    }
    if(count==2)
    {
        cout<<no<<"\tis prime no";
    }
    else
    {
       cout<<no<<"\tis not prime no";
    }
}