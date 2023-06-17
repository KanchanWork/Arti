#include<iostream>
using namespace std;
class Teststatic
{
    public:
    int x;
    static int y;
    void showdata()
        {
        cout<<"x"<<x<<"y"<<y<<endl;
        }
};
int Teststatic::y=0;
int main()
{
    Teststatic ts1;
    ts1.x=10;
    ts1.y=10;
    Teststatic ts2;
    ts2.x=50;
    ts2.y=50;
    Teststatic ts3;
    ts3.x=60;
    ts3.y=60;
    ts1.showdata();
    ts2.showdata();
    ts3.showdata();
}