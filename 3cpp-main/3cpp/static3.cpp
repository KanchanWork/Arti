#include <iostream>
#include<string.h>
using namespace std;
class bank
{
private:
    int Ano;
    char Anm[50];
    int Amtbal;
    static long int Bbal;
public:
    // bank(){};// default costructor
    bank(int ac,char an[50],int amt)//constructur special member function
    {
        Ano=ac;
        strcpy(Anm,an);
        Amtbal=amt;
        Bbal+=amt;
    }
    void displaybal()
    {
        cout<<"Ano:"<<Ano<<"name:"<<Anm<<"Amount balance:"<<Amtbal<<endl;

    }
    void deposite (int damt)
    {
        Amtbal+=damt;
        Bbal+=damt;

    }
void withdraw(int wamt)

{
    if (wamt<Amtbal)
    {
        Amtbal-=wamt;
        Bbal-=wamt;
    }
    else
    {
     cout<<"insufficient balance"<<endl;
    }

}
static void displaybankbal()
{
    cout<<"the total bank balance"<<Bbal<<endl; 
}
};//class end

 long int bank::Bbal=0 ;
    int main()
{
    bank obj1 =bank(100,"supriya",5000);
    bank obj2=bank(101,"gayatri",10000);
    bank obj3=bank(102,"sushil",8000);
    cout<<"details of supriya acount"<<endl;
    obj1.displaybal();
    cout<<"details of gayatri acount"<<endl;
    obj2.displaybal();
    cout<<"details of sushil acount"<<endl;
    obj3.displaybal();
    bank::displaybankbal ();//Total bank balance
    cout<<"supriya enter amount to deposite:";
    int amt;
    cin>>amt;
    obj1.deposite(amt);
    cout<<"datails of supriya account"<<endl;
    obj1.displaybal();
    bank::displaybankbal();//Total bank bal
    obj2.deposite(amt);
    cout<<"sushil enter amount to deposit";
    int amtd;
    cin>>amtd;
    obj3.deposite(amtd);
    cout<<"datails of sushil account"<<endl;
    obj3.displaybal();
    bank::displaybankbal();//Total bank bal
    cout<<" gayatri enter account to withdraw"<<endl;
   int amtw;
   cin>>amtw;
    obj2.withdraw(amtw);
    cout<<"details of gayatri  account "<<endl;
    obj2.displaybal();
    bank::displaybankbal();

}
