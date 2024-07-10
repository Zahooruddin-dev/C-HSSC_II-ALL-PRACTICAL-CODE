#include<iostream>
using namespace std;

int tri (int num1, int num2){
	return (1.0/2)* num1 * num2;
}

int cir (int num1, int num2){
	return  (3.14)* num1* num2;
}

int par (int num1, int num2){
	return  num1* num2;
}

int main(){
	string cal;
	int num1,num2;
	cout<<"Enter Values if you want to caluclate Area that of Parallogram ( USE Para) or Circle ( USE Circle ) or Traingle ( USE Tara) which ever you want the area to be calculated"<<endl;
	cin>>cal;
	
	if ( cal == "Para" || cal == "Circle" || cal == "Tara" ){
		if ( cal == "Tara"){
			cout<<"enter Breath"<<endl;
			cin>>num1;
			
			cout<<"enter height"<<endl;
			cin>>num2;
			cout<<tri(num1,num2)<<endl;
		}
		else	if ( cal == "Para"){
			cout<<"enter Base"<<endl;
			cin>>num1;
			
			cout<<"enter height"<<endl;
			cin>>num2;
			cout<<par(num1,num2)<<endl;
		}
			else	if ( cal == "Circle"){
			cout<<"enter Radius"<<endl;
			cin>>num1;
			
			cout<<cir(num1,num2)<<endl;
		}
		
	}
	else {
		cout<<"Invalid input";
	}
	return 0;
}
