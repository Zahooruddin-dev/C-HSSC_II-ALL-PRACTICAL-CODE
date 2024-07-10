#include <iostream>
using namespace std;

class MyClass {
private:
    int privateVar;

public:
    // Public member function to set the value of privateVar
    void setPrivateVar(int val) {
        privateVar = val;
    }
    // Public member function to get the value of privateVar
    int getPrivateVar() {
        return privateVar;
    }
};
int main() {
    MyClass obj;
    
    obj.setPrivateVar(10);// Accessing public member function to set the private variable

    cout << "Private variable value: " << obj.getPrivateVar() << endl;  // Accessing public member function to get the private variable and display it
    return 0;
}

