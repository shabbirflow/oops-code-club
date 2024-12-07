#include <iostream>
using namespace std;

// nested class can access private members of enclosing class
// but enclosing class cannot access private members of nested class

class Enclosing {
private:
    int x = 10; // Private member of Enclosing class

    class Nested {
    private:
        int y = 20; // Private member of Nested class
    public:
        void NestedFun(Enclosing* e) {
            // Nested class accessing private member of Enclosing
            cout << "Accessing Enclosing's private member x: " << e->x << endl;
        }
    }; // End of Nested class

public:
    void callNestedFun() {
        Nested n;          // Create an instance of Nested
        n.NestedFun(this); // Call NestedFun, passing the pointer to Enclosing
    }
};

int main() {
    Enclosing e;
    e.callNestedFun(); // Indirectly call NestedFun through Enclosing
    return 0;
}
