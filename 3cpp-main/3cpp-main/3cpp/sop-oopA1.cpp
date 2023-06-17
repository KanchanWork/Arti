#include <iostream>
using namespace std;
//#include<conio.h>
class facto
{
    private:
    int n;
    public:
    void getdata(int no)
    {
         n=no;
    }
    void showdata()
    {
        cout<<"n:"<<n<<endl;
    }
    int Facto (int n)
    {
        int f=1;
        while (n>0)
        {
            f*=n;
            n--;
        }
        return f;
     }
};
 int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;
    facto ft;
    ft.getdata(n);
    ft.showdata();
    cout<<"factorial of "<<n<< " is "<<ft.Facto (n)<<endl;
}