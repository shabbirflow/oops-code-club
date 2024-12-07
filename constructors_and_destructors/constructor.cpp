#include<iostream>
using namespace std;

class MyClass {
public:
    // Default constructor
    // MyClass() { //error if you comment this!! -- error goes away if you comment both constructors.
    //     cout << "User-defined default constructor" << endl;
    // }
    // Parameterized constructor
    MyClass(int a) {
        cout << "Parameterized constructor with argument " << a << endl;
    }
};

int main() {
    // MyClass obj1;       // Calls user-defined default constructor
    // MyClass obj2(10);    // Calls parameterized constructor
    return 0;
}
