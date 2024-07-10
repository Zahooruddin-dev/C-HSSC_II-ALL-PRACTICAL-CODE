#include<iostream>
using namespace std;
int tri(	int n){
if(n==0 || n == 1){
	return 1;
}
return (n)*tri (n-1);
}
int main(){


 int num;
	cout<<"Enter Input to get facotrail"<<endl;
		cout<<"Enter"<<endl;
		cin>>num;
cout<<tri(num);
}
