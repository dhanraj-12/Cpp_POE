#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Display Base" << endl;
    }
    virtual void show()
    {
        cout << "Show Base" << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Display Derived" << endl;
    }

    void show()
    {
        cout << "Show Derived" << endl;
    }
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    bptr = &B;
    bptr->display();
    bptr->show();
    bptr = &D;
    bptr->display();
    bptr->show();
    return 0;
}