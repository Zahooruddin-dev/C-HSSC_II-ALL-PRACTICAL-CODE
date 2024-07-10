#include<iostream>
using namespace std;

int tri (int num1, int num2){
	return num1*num1*num1;
	
}

int cir (int num1, int num2){
	return  (3.14)* num1*num1* num2;
}

int par (int num1, int num2){
return (4.0/3)* (3.14) * num1 * num1 * num1;}

int main(){
	string cal;
	int num1,num2;
	cout<<"Volume of Sphere ( USE Para) || OF CUBE (USE Tara) || OF CYLINDER ( Circle )"<<endl;
	cin>>cal;
	
	if ( cal == "Para" || cal == "Circle" || cal == "Tara" ){
		if ( cal == "Tara"){
			cout<<"enter Value to find volums"<<endl;
			cin>>num1;
			cout<<tri(num1,num2)<<endl;
		}
		else	if ( cal == "Para"){
				cout<<"enter Radius"<<endl;
			cin>>num1;

			cout<<par(num1,num2)<<endl;
		}
			else	if ( cal == "Circle"){
			cout<<"enter Radius"<<endl;
			cin>>num1;
				cout<<"enter Height"<<endl;
			cin>>num2;
			cout<<cir(num1,num2)<<endl;
		}
		
	}
	else {
		cout<<"Invalid input";
	}
	return 0;
}
