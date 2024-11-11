#include <bits/stdc++.h>
using namespace std;
class Alpha
{
public:
    int x;
    Alpha(int i)
    {
        x = i;
        cout << "alpha is initialised" << endl;
    }
    void show()
    {
        cout << "x = " << x << endl;
    };
};
class Beta
{
public:
    int y;
    Beta(int i)
    {
        y = i;
        cout << "beta is initialised" << endl;
    }
    void show()
    {
        cout << "y = " << y;
    }
};

class Gamma : public Beta, public Alpha
{
public:
    int m, n;
    Gamma(int a, int b, int c, int d) : Alpha(a), Beta(b)
    {
        m = c;
        n = d;
    }
    void show()
    {
        cout << "x gkufg= " << x << endl;
        ;
    };
};
int main()
{
    Gamma g1(5, 6, 8, 4);
    Alpha *a;
    a = &g1;
    a->show();
    // g1.show();
}