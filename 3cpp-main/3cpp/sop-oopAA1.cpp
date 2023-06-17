//print even no and summation
#include<iostream>
using namespace std;
class evenno
{
    
   public:
    int Evenno( int i)
    {
       // int i;
        for(i=0;i<=100;i++)
    {
     if(i%2==0)
     {
        cout<<i<<endl;
       // sum+=i;
     }
     
    }
    return 0;
    }
     int sum()
    {
        int i,sum=0;
        for(i=0;i<=100;i++)
    {
     if(i%2==0)
     {
        
        //cout<<i<<endl;
       sum+=i;
     }
     
    }
    return sum;
    }

};//class end
int main()
{
    int i, sum=0;
   evenno en;
   cout<<"even no from 0 to 10"<<en.Evenno(i)<<endl;
   cout<< "sumation:"<<en.sum()<<endl;
}
