#include <iostream>
using namespace std;

class MyClass {
public:
    int *ptr;

    // Constructor
    MyClass(int val) { ptr = new int(val); }

    // Copy Constructor (Deep Copy)
    MyClass(const MyClass &other) {
        ptr = new int(*other.ptr); // Create new memory and copy the value (deep copy)
    }

    void display() {
        cout << "Value: " << *ptr << endl;
    }

    ~MyClass() {
        delete ptr; // Properly delete the memory
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1; // Deep copy, obj2 gets its own copy of ptr

    obj2.display(); // Displays 10
    *obj2.ptr = 20;
    obj1.display(); // Displays 10, no impact on obj1
    obj2.display();

    return 0;
}
