#include<iostream>
using namespace std;
int main(){
	int num =10;
	int *ptr = &num;
	cout<<"memory addresses"<<ptr<<endl;
	cout<<" Stored value \n"<< *ptr <<endl;
	return 0;
}
