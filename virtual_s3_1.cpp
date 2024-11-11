#include <bits/stdc++.h>
using namespace std;
class BC
{
public:
    int b;
    virtual void show()
    {
        cout << "B = " << b << endl;
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << "D = " << d << endl;
    }
};
int main()
{
    BC base;
    BC *bptr;
    bptr = &base;
    bptr->b = 100;
    bptr->show();
    DC derived;
    bptr = &derived;
    derived.d = 200;
    bptr->show();
    return 0;
}