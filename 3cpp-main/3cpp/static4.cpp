#include<iostream>
#include<string.h>
// #include<conio.h>
using namespace std;
class itembill
{
private:
    char inm[10];
    int up,qty,pr,dis,netpr;
    static long int tolbill;
public:
     itembill(){};
    itembill(char nm[10],int u,int q)
    {
      strcpy (inm,nm);
      up=u;
      qty=q;

    }
    void compute()
    {
        pr=up*qty;
        dis=pr*0.5;
        netpr=pr-dis;
        tolbill+=netpr;
    }
    void display()
    {
    
        cout<<inm <<"\t";
          cout<<up<<"\t";
          cout  <<qty<<"\t";
          cout  <<pr<<"\t";
          cout <<dis<<"\t";  
          cout<<  netpr<<"\n";
    }
    
    static void displaybill()
    {
        cout<<"total bill compute:"<<tolbill<<"/-Rs"<<endl;
    }
};// end of class
long int itembill::tolbill=0;

int main()
{
    itembill it[10];
    char inm[10];
    int up, qty,i;
    for(i=0;i<2;i++)
    {
        cout<<"enter details of item purchace "<<i+1<<endl;
        cout<<"enter item name"<<"unit price"<<"quntity"<<endl;
        cin>>inm>>up>>qty;
        it[i]= itembill(inm,up,qty);
        it[i].compute();
    }
    cout<<"sr no\t"<<"item name\t"<<"unit price\t"<<"quntity price\t"<<"discount\t"<<"net price\t"<<endl;
    for(i=0;i<2;i++)
    {
        cout<<i+1<<endl;  
        it[i].display();
        

    }
    cout<<"=================================================================="<<endl;
    itembill::displaybill();
}
