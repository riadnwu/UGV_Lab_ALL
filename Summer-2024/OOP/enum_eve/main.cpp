#include <iostream>
using namespace std;

class Car {
public:
    string *name;
    // Constructor
    Car(string m) {
        name = new string(m);
        // Dynamically allocate memory
        cout << "From Constructor" <<*name<< endl;
    }
    // Destructor
    ~Car() {
        delete name;
        // Free allocated memory
        cout << "From Destructor" << endl;
    }
};

int main() {
    Car myCar("Toyota");
    // Calls constructor
      return 0;
}
