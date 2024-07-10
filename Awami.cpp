#include<iostream>
using namespace std;
class MyClass{
	private: 
	string name;
	public:
		MyClass (string n){
		name = n;
		}
		string addName() {
	return "Hello " + name;}
};
int main(){
	string name;
	cout<<"Enter you name";
	getline(cin, name);
	MyClass myClass (name);
	cout<<"Result : "<< myClass.addName ()<<endl;
}
