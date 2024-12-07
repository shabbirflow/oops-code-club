#include <iostream>
using namespace std;

// Global variables and functions
int globalWheels = 4;

void globalFeature() {
    cout << "Cars have engines!" << endl;
}

void carFactory() {
    static int factoryWorkers = 50;  // Static variable in enclosing function
    enum { dailyProduction = 100 }; // Enum in enclosing function
    int factoryID = 1234;           // Non-static variable in enclosing function

    // Define a local class
    class Car {
    public:
        static void displayFactoryInfo() {
            cout << "Static Member Function: This factory produces cars!" << endl;
        }

        void showDetails() {
            // Accessing static and enum variables of the enclosing function
            cout << "Number of workers in factory: " << factoryWorkers << endl;
            cout << "Daily production capacity: " << dailyProduction << " cars" << endl;

            // The following would cause an error because non-static local variables are not accessible
            // cout << "Factory ID: " << factoryID << endl;  // Error

            // Accessing global variables and functions
            cout << "All cars have " << globalWheels << " wheels." << endl;
            globalFeature();
        }
    };

    // Accessing static member function of the local class
    Car::displayFactoryInfo();

    // Creating an object of the local class
    Car myCar;
    myCar.showDetails();

    // Defining another local class in the same function
    class Honda {
    public:
        void introduce() {
            cout << "This is a Honda car. Reliable and efficient!" << endl;
        }
    };

    // Accessing the second local class
    Honda myHonda;
    myHonda.introduce();
}

int main() {
    carFactory();
    return 0;
}

// member methods of local class can only access static 
// and enum variables of the enclosing function 

// Local classes can access global types, variables, and functions. 
// Also, local classes can access other local classes of the same function. 

// Local class cannot contain static data members 
// but can contain static member funcs.
