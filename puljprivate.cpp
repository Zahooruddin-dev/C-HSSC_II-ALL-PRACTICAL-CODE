#include<iostream>
using namespace std;
class MyClass{
	private:
	int privateVar;
	public:
		void setPrivateVar(int val){
			privateVar = val;
		}
		int getPrivateVar(){
	return privateVar;
	}
};
int main(){
	MyClass obj;
	obj.setPrivateVar(10);
	cout<<"Private var Value is : "<< obj.getPrivateVar();
}
