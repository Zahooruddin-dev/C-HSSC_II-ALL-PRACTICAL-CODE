#include<iostream>
using namespace std;

int tri (int num1, int num2,int num3){
	return (num1 + num2 + num3)/3 ;
	
}



int main(){
	string cal;
	int num1,num2,num3;
	cout<<"Enter 3 input to get average"<<endl;
		cout<<"Enter"<<endl;
	
	cin>>num1;
	cout<<"Enter"<<endl;
	
	cin>>num2;	cout<<"Enter"<<endl;
	
	cin>>num3;
	cout<<tri(num1,num2,num3);
	return 0;
}
