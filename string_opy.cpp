#include <bits/stdc++.h>
using namespace std;
class String
{
private:
    char *str;

public:
    String()
    {
        str = nullptr;
        str = new char[1];
        str[0] = '\0';
        cout << "defualt constructor called" << endl;
    }
    String(char *s1)
    {
        if (s1 == nullptr)
        {
            str = new char[1];
            str[0] = '\0';
        }
        else
        {
            str = new char[strlen(s1)];
            strcpy(str, s1);
        }
        cout << "1 parameterized constructor called" << endl;
    }
    String(const String &s1)
    {
        str = new char(strlen(s1.str));
        strcpy(str, s1.str);
        cout << "Copy constructor called" << endl;
    }
    String operator+(const String &s1)
    {
        String s;
        s.str = new char[strlen(this->str) + strlen(s1.str) + 1];
        strcpy(s.str, this->str);
        strcat(s.str, s1.str);
        return s;
    }
    void print()
    {
        int n = strlen(this->str);
        for (int i = 0; i < n; i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
};

int main()
{
    String s0;
    char ch[] = "dhanraj";
    String s1(ch);
    s1.print();
    char c[] = "Jadhav";
    String s2(c);
    s2.print();
    String s3 = s1 + s2;
    s3.print();
    String s4(s3);
    s4.print();
    return 0;
}