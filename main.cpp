#include<bits/stdc++.h>
using namespace std;

class A {
public:
    void display() {
        std::cout << "Display from A" << std::endl;
    }
};

class B {
public:
    void display() {
        std::cout << "Display from B" << std::endl;
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    // obj.display(); // Error: ambiguous

    // Using pointers to resolve ambiguity:
    A* aPtr = &obj;
    B* bPtr = &obj;

    aPtr->display(); // Calls display() from class A
    bPtr->display(); // Calls display() from class B

    
    return 0;
}

