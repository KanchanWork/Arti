#include <iostream>

using namespace std;


class test
{
    int code;  
    static int count;
    public:
    void setcode(int a)
    {
         code=a ;
        code =++count;

    }
    void showcode()
    {
        cout<<"object no";
        cout<<code<<endl;
    }
    static void showcount()
    {
         cout<<"count"<<count<<endl;
    }
    
    };
    int test::count;
    int main ()
    {
        int a;
        test t1,t2;
        t1.setcode(a);
        t2.setcode(a);
        test::showcount();
        test t3;
        t3.setcode(a);
        test::showcount();
        t1.showcode ();
        t2.showcode();
        t3.showcode();

     }