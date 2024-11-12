#include <bits/stdc++.h>
using namespace std;

class Complex {

    private : 
    
    int real;
    int img ;

    public :

    Complex () {
        this -> real = 0;
        this -> img = 0;
    }
    Complex (int a, int b) {
        this -> real = a;
        this -> img = b;
    }
    Complex  (Complex & temp) {
        this -> real = temp.real;
        this -> img = temp.img;
    }

    void getData () {
        cout << real << " " << img << endl;
    }

    Complex operator + (Complex c) {
        Complex temp;
        temp.real = this -> real + c.real;
        temp.img = this -> img + c.img;
        return temp; 
    }

};



int main () {

    Complex c1 (2,3);
    Complex c2 (3,4);


    Complex c3 = c1 + c2;

    c3.getData();
}