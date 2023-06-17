//read any four nos to determine the gretest among them
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter any four no:";
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d)
    {
        cout<<a<<" is gretest";
    }
    else if(b>a && b>c && b>d)
    {
        cout<<b<<" is gretest";
    }
    else if (c>a && c>b && c>d)
    {
        cout<<c<<"is gretest";
    }
    else if (d>a && d>b && d>c)
    {
        cout<<d<<" is gretest";
    }
}