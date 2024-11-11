/*Implement class time using constructor and friend function implement
sum of two time class objects*/
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
    friend Time addTime(Time t1, Time t2);
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};
Time addTime(Time t1, Time t2)
{
    int totalseonds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalseconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int totalSeconds = totalseonds1 + totalseconds2;
    int hours = totalSeconds / 3600;

    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;
    return Time(hours, minutes, seconds);
}

int main()
{
    Time t1(10, 30, 45);
    Time t2(5, 25, 15);
    Time sum = addTime(t1, t2);
    sum.display();
    return 0;
}