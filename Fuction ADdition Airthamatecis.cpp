#include<iostream>
using namespace std;

int add(int num1, int num2){
return  num1 + num2;
}

int subtract(int num1, int num2){
return  num1 - num2;
}

int multi(int num1, int num2){
return  num1 * num2;
}

int divide(int num1, int num2){
return  num1 / num2;
}
int main(){
	int num1,num2,total;
	char op;
	cout<<"Enter Number"<<endl;
	cin>>num1;
		cout<<"Enter Number"<<endl;
		cin>>num2;
			cout<<"Enter Operator"<<endl;
			cin>>op;
			if (op == '+'){
				cout<<add(num1,num2)<<endl;
			}
			else if (op == '-'){
				cout<<subtract(num1,num2)<<endl;
			}
			else if (op == '*'){
				cout<<multi(num1,num2)<<endl;
			}
				else if (op == '/'){
				cout<<divide(num1,num2)<<endl;
			}
	return 0;
}
