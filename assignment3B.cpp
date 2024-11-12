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

    Time operator + (Time t1) {
        Time t3 ;
        t3.sec = t1.sec + this -> sec;
        t3.min = t1.min + this -> min + (t3.sec / 60);
        t3.hr = t1.hr + this -> hr + (t3.min / 60);
        t3.sec = t3.sec % 60;
        t3.min = t3.min % 60;
        return t3;
    }

    void showTime () {
        cout << "hr : " << hr <<"  " << "min : " << min << "  " << "sec : " << sec << endl;
    }

};



int main () {


    Time t1 (12,45,23);
    Time t2 (6,34,34);

    Time t3 = t1 + t2;
    t3.showTime();
    
}