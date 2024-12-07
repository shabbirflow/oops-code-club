#include <iostream>
using namespace std;

class MyClass {
    int value;

public:
    MyClass(int value) : value(value) {}

    bool isSameObject(MyClass& obj) {
        return this == &obj;  // Compare memory addresses of objects
    }
};

int main() {
    MyClass obj1(10), obj2(20);

    cout << obj1.isSameObject(obj1) << endl;  // Output: 1 (true)
    cout << obj1.isSameObject(obj2) << endl;  // Output: 0 (false)

    return 0;
}
