#include<iostream>
using namespace std;
 int add(int num1,int num2){
	return num1 + num2;
}
 int sub(int num1,int num2){
	return num1 - num2;
}
 int div(int num1,int num2){
	return num1 / num2;
}
 int mul(int num1,int num2){
	return num1 * num2;
}

int main(){
int num1,num2;
char op;

cout<<"enter First number"<<endl;
cin>>num1;

cout<<"enter second number"<<endl;
cin>>num2;

cout<<"enter operatror"<<endl;;
cin>>op;
if (op == '+' || op == '-' || op == '/' || op == ' * '){

if (op == '+'){
	cout<< add(num1,num2) << endl;
}
else if (op == '-'){
	cout<< sub(num1,num2) << endl;
}

else if (op == '/'){
	cout<< div(num1,num2) << endl;
}

else if (op == '*'){
	cout<< mul(num1,num2) << endl;
}
}
else {
	cout<< "invalid operator"<<endl;
}
}

