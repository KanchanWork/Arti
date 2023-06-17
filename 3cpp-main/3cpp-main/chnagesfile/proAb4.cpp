//read a no to check whether it is palindrom or not
//121 reverce of a no is same121
#include<iostream>
using namespace std;

int main()
{
    int n,temp,r,p=0;
    cout<<"Enter a no:";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=(n%10);
        p=(p*10)+r;
        n=n/10;

    }
    if(temp==p)
    {
        cout<<temp<< "\tis a pallindrom";

    }
  else
  {
    cout<<"yes";
  }
}