#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str1[100],str2[100],temp[100];
	
	cout<<"Enter String 1 ";
	cin.getline(str1,100);
	cout<<"Enter String 2 ";
	cin.getline(str2,100);

	strcpy(temp,str1);
	cout<<"Strcpy value of temp1 : "<<temp<<endl;
	
	strcat(temp,str2);
	
	
	cout<<"Strcpy value of temp1 : "<<temp<<endl;
	
cout<<"Length is : "<<strlen(str1)<<endl;
	
	int cmp = strcmp (str1,str2);
	if( cmp ==0) {
		cout<<"Both are equal";
	}
	
	else if (cmp <0){
		cout<<"String 1` is less than 2";
	}
		else {
		cout<<"String 1` is greater than 2";
	}
	
	
	return 0;
}
