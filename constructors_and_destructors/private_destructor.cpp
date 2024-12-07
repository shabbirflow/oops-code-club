// CPP program to illustrate Private Destructor
#include <iostream>
using namespace std;
// A class with private destructor
class Test {
private:
	~Test() {}
public:
	friend void destructTest(Test*);
    void destruct() { delete this; }
};
// Only this function can destruct objects of Test
void destructTest(Test* ptr) { delete ptr; }

int main()
{
	// create an object
	Test* ptr = new Test;
    cout<<"Object created. Now deleting object.."<<endl;
	// destruct the object
	destructTest(ptr);
    // ptr->destruct(); //both can use it

	return 0;
}
