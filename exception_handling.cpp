#include <bits/stdc++.h>
using namespace std;
int factorial(int a)
{
    if (a < 0)
    {
        throw runtime_error("Entered number is Negative please Enter the positive number");
    }
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}
int divide(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("Denominator is negative plese enter the positive number");
    }
    return a / b;
}
int main()
{
    cout << "Enter the Number to calculate the factorial: " << endl;
    int a;
    cin >> a;
    try
    {

        cout << factorial(a) << endl;
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "Unexpected Error" << endl;
    }
    cout << "Enter the Numerator and Denominator to calculate the Division respectively : " << endl;
    int b, c;
    cin >> b >> c;
    try
    {
        cout << divide(b, c) << endl;
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "Unexpected Error" << endl;
    }

    return 0;
}