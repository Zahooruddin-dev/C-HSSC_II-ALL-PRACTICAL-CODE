#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str1[100],str2[100],temp[100];
	
	
	cout<<"first string : ";
	cin.getline(str1, 100);
	
    cout<<" second string : ";
	cin.getline(str2,200);	
	
	strcpy(temp,str1);
	cout<<""<<temp<<endl;
	
	strcat(temp,str2);
	cout<<""<<temp<<endl;
	
	cout<<"Lenght is : "<< strlen(str1)<<endl;
	
	int cmp =strcmp(str1,str2);
	if (cmp == 0){
		cout<<"equal lenghts";
	}
	else if (cmp < 0){
		cout<<"string 1 is less than string 2"<<endl;
	}
	else {
			cout<<"string 1 is greater than string 2"<<endl;
	
	}
	
	
	
	
	return 0;
}
