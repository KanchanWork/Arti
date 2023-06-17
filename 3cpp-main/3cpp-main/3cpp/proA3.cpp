//print all even no in the range 0-100,find their sum.
#include<iostream>
using namespace std;
int main()
{
    int  i ,sum=0;
    cout<<"All the no in the range of 0-10";
    for(i=0;i<=100;i++)
    {
     if(i%2==0)
     {
        cout<<i<<endl;
        sum+=i;
     }
     
    }
    cout<<"sumation of all even no is "<<sum<<endl;
   
    

 
}