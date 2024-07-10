#include<iostream>
using namespace std; 
int main(){
	int SIZE = 5;
	int numbers [SIZE];
	int highest,lowest;
	int sum= 0;
	
	cout<<"Enter"<<SIZE<<"Numeric values : "<<endl;
	for(int i = 0; i<SIZE; ++i){
		
		cout<< "Enter values " << (i+1)<<": ";
		cin>>numbers[i];
		sum += numbers[i];
		
		if (i==0 || numbers[i] > highest){
			highest = numbers[i];
		}
		if (i==0 || numbers[i] < lowest){
			lowest = numbers[i];
		}

		
	}
	
	int average = sum / SIZE;
	cout<<"Highest value is : "<<highest<<endl;
	cout<<"Lowest value is : "<<lowest<<endl;
	cout<<"Average value is : "<<average<<endl;
}
