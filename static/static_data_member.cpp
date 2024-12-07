// C++ program to demonstrate the number of times
// constructor and destructors are called
// read this:
// https://www.geeksforgeeks.org/private-destructor-in-cpp/?ref=lbp

#include <iostream>
using namespace std;
// It is static so that every class object has the same
// value
static int Count = 0;
class Test {
public:
    // User-Defined Constructor
    Test()
    {

        // Number of times constructor is called
        Count++;
        cout << "No. of Object created: " << Count << endl;
    }

    // User-Defined Destructor
    ~Test()
    {
        // It will print count in decending order
        cout << "No. of Object destroyed: " << Count
             << endl;
        Count--;
        // Number of times destructor is called
    }
};

// driver code
int main()
{
    Test t, t1, t2, t3;

    return 0;
}