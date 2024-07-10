#include <iostream>
using namespace std;

class MyClass {
private:
    int num1, num2;
public:
    MyClass(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    void setNumbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    int add() {
        return num1 + num2;
    }
    int subtract() {
        return num1 - num2;
    }
    void display() {
        cout << "num1: " << num1 << endl;
        cout << "num2: " << num2 << endl;
    }
};

int main() {
    MyClass obj1(10, 5);
    MyClass obj2(20, 8);

    cout << "obj1 - Addition: " << obj1.add() << endl;
    cout << "obj1 - Subtraction: " << obj1.subtract() << endl;
    obj1.display();

    cout << "obj2 - Addition: " << obj2.add() << endl;
    cout << "obj2 - Subtraction: " << obj2.subtract() << endl;
    obj2.display();

    return 0;
}

