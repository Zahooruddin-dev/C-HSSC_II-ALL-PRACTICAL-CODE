#include<iostream>
using namespace std;

class MyCLass{
private:
int privateVar;
public:
	void setPrivateVar(int val){
		privateVar= val;
	}
	int getPrivateVar(){
		return privateVar;
	}
};
int main(){
	MyCLass obj;
	obj.setPrivateVar(10);
	cout<<"Private Var value is : "<< obj.getPrivateVar() <<endl;
}
