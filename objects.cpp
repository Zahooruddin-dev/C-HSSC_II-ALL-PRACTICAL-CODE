#include<iostream>
#include<string>
using namespace std;
class BankAccount {

	public: 
	string name;
	int amount;
};
int main(){
	BankAccount ammount1;
	ammount1.name = " Muhammad ";
	ammount1.amount = 3000;
	cout<<"Balance is : "<<ammount1.amount <<"Name is : "<<ammount1.name<<endl;

}
