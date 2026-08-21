#include <iostream>
using namespace std;

class item
{
    int number;
    static int count;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }

    void getcount()
    {
        cout << "count : " << count << endl;
    }
    void getnumber()
    {
        cout << "number : " << number << endl;
    }

};

// Define the static data member
int item::count ;

int main()
{
    item a, b, c;

    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(500);
    b.getdata(700);
    c.getdata(800);

    a.getnumber();
    b.getnumber();
    c.getnumber();

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}




# include <iostream>
using namespace std;
class test
{
    int code;
    static int count;
    public:
    void setcode()
    {
        code = ++count;
    }
    void showcode()
    {
        cout << "object number : " << code << endl;
    }
    static void showcount()
    {
        cout << "count : " << count << endl;
    }
};

int test::count;
int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();

    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}