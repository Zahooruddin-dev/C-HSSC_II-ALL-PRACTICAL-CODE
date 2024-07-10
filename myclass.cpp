#include<iostream>
using namespace std;

class MyClass{
	private: 
	int num1,num2;
	public:
	MyClass(int n1,int n2){
		num1=n1;
		num2=n2;
	}
	void setNumbers(int n1,int n2){
		num1=n1;
		num2=n2;
	}
	int add(){
		return num1+ num2;
	}
	int sub(){
		return num1- num2;
	}
	void display(){
		cout<<"num1 : "<<num1<<endl;
		cout<<"num2 : "<<num2<<endl;
	}
};
int main(){
	MyClass obj1(10,5);
	MyClass obj2(20,8);
	
	cout<<"Object 1 Addtion : "<< obj1.add()<<endl;	
	cout<<"Object 1 subtraction : "<< obj1.sub()<<endl;
	obj1.display();

	cout<<"Object 1 Addtion : "<< obj2.add()<<endl;
	cout<<"Object 1 subtraction : "<< obj2.sub()<<endl;
	obj2.display();
	
	return 0;
}
