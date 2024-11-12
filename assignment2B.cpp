#include <bits/stdc++.h>
using namespace std;


class Time {

    private :
    int hr;
    int min;
    int sec;

    public :
    Time () {
        this -> hr = 0;
        this -> min = 0;
        this -> sec = 0;
    }
    Time (int a, int b, int c) {
        hr = a;
        min = b;
        sec = c;
    }
    Time (Time & temp) {
        this -> hr = temp.hr;
        this -> min = temp.min;
        this -> sec = temp.sec;
    }

    friend Time sum (Time t1, Time t2);

    void showTime () {
        cout << "hr : " << hr <<"  " << "min : " << min << "  " << "sec : " << sec << endl;
    }

};


Time sum (Time t1, Time t2) {
    Time t3 ;
    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min + (t3.sec / 60);
    t3.hr = t1.hr + t2.hr + (t3.min / 60);
    t3.sec = t3.sec % 60;
    t3.min = t3.min % 60;
    return t3;

}
int main () {


    Time t1 (12,45,23);
    Time t2 (6,34,34);

    Time t3 = sum (t1 ,t2);
    t3.showTime();
    
}