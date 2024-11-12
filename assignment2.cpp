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

    friend Complex sum (Complex c1,Complex c2); 

};

Complex sum (Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main () {

    // Complex c1 (2,3);
    Complex c2 (3,4);
    Complex c3 (c2);

    Complex c4 = sum (c3,c2);

    c4.getData();
}