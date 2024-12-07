#include <iostream>
using namespace std;

class Base {
protected:
    int protectedVar; // protected data member
public:
    Base() {
        protectedVar = 10; // Initialize protectedVar
    }
};

class Derived : public Base {
public:
    void accessProtectedInDerived() {
        cout << "Accessing protected member in Derived class: " << protectedVar << endl;
    }
};

class GrandDerived : public Derived {
public:
    void accessProtectedInGrandDerived() {
        cout << "Accessing protected member in GrandDerived class: " << protectedVar << endl;
    }
};

int main() {
    Base baseObj;
    // baseObj.protectedVar = 20; // Error: 'protectedVar' is protected in 'Base'

    Derived derivedObj;
    derivedObj.accessProtectedInDerived(); // Can access protectedVar in Derived class

    GrandDerived grandDerivedObj;
    grandDerivedObj.accessProtectedInGrandDerived(); // Can access protectedVar in GrandDerived class

    return 0;
}
