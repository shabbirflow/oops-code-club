#include <iostream>
using namespace std;

class MyClass {
public:
    int *ptr;

    // Constructor
    MyClass(int val) { ptr = new int(val); }

    // Copy Constructor (Shallow Copy)
    MyClass(const MyClass &other) { //same behaviour if this func. is commented
        ptr = other.ptr; // Copy the pointer (shallow copy)
    }

    void display() {
        cout << "Value: " << *ptr << endl;
    }

    ~MyClass() {
        delete ptr; // Deleting shared resource will cause issues with shallow copy
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1; // Shallow copy, both obj1 and obj2 point to the same memory

    obj2.display(); // Displays 10
    *obj2.ptr = 20;

    obj1.display(); // Displays 20 (shallow copy issues)

    return 0;
}
