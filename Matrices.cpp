#include<iostream>
using namespace std;
int main(){
	
	int mat1[4][4],mat2[4][4],result[4][4];
	
	
	cout<<"Enter values for 4 X 4 matrice : "<<endl;
	for ( int i= 0; i< 4; ++i){
cout<<"Enter in a row please : "<<i+ 1<<"\n";
		for ( int j= 0; j< 4; ++j){
			cin>>mat1[i][j];
			
				}
				cout<<endl;
	}
		cout<<"Values for 4 X 4 matrice : "<<endl;
	for ( int i= 0; i< 4; ++i){	
		for ( int j= 0; j< 4; ++j){	
	cout<<mat1[i][j]<<" ";
		
			}		cout<<" "<<endl;
	}
		cout<<"Enter second values for 4 X 4 matrice : "<<endl;
	for ( int i= 0; i< 4; ++i){
		cout<<"Enter in a row please : "<<i+ 1<<"\n";
		for ( int j= 0; j< 4; ++j){
			cin>>mat2[i][j];
				}
				cout<<endl;
	}
		cout<<"Values for 4 X 4 matrice : "<<endl;
	for ( int i= 0; i< 4; ++i){	
		for ( int j= 0; j< 4; ++j){	
	cout<<mat2[i][j]<<" "<<endl;
		
			}		cout<<" "<<endl;
	}
	int add [4][4],sub[4][4];
			for ( int i= 0; i< 4; ++i){
	
		for ( int j= 0; j< 4; ++j){
		
	result[i][j]= mat1[i][j] +mat2[i][j];
		
		
			}
				cout<<" "<<endl;
	}
	
		cout<<" Adddition Value is "<<endl;
	
	for ( int i= 0; i< 4; ++i){
		for ( int j= 0; j< 4; ++j){
		
	cout<<result[i][j]<<endl;
		
		
			}
	}
	
	return 0;
	
	
	
	
	
	
	
	
	
	
}
