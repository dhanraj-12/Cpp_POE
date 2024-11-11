/*2) operator overloading Implement addition of 1)Two time object = t3 =
t1+t2*/
#include <bits/stdc++.h>
using namespace std;
class Time
{
private:
    int hours, minutes, seconds;

public:
    Time(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time operator+(Time &t2)
    {
        int totalseonds1 = this->hours * 3600 + this->minutes * 60 + this->seconds;
        int totalseconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
        int totalSeconds = totalseonds1 + totalseconds2;
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;
        return Time(hours, minutes, seconds);
    }
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};
int main()
{

    Time t1(10, 30, 45);
    Time t2(5, 25, 15);
    Time t3 = t1 + t2;
    t3.display();
    return 0;
}   