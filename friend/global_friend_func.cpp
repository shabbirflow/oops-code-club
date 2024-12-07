// C++ program to create a global function as a friend function of some class
#include <iostream>
using namespace std;

class base {
private:
    int private_variable;
protected:
    int protected_variable;
public:
    base()
    {
        private_variable = 10; protected_variable = 99;
    }
    
      // friend function declaration
    friend int friendFunction(base& obj);
};


// friend function definition
int friendFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable;

    return 9;
}

// driver code
int main()
{
    base object1;
    friendFunction(object1);

    return 0;
}