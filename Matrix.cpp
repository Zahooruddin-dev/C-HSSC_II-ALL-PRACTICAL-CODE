#include<iostream>
using namespace std;
int main(){
	int mat1[4][4],mat2[4][4],result[4][4];
	int row1,col1,row2,col2;
	
	
	cout<<"Enter the input on how do you want the matrice to be like  [4 x 4 ] : ";
	cin>>row1,col1;
	cout<<"Enter the first elements of matrices 1 : "<<endl;
	for(int i = 0; i<row1; ++i){
		for(int j =0; j<col1; ++j){
			cin>>mat1[i][j];
		}
	}
	
	
	cout<<"Enter the input on how do you want the matrice to be like  [4 x 4 ] : ";
	cin>>row1>>col1;
	
	cout<<"Enter the first elements of matrices 2 : "<<endl;
	
		for(int i = 0; i<row2; ++i){
		for(int j =0; j<col2; ++j){
			cin>>mat2[i][j];
		}
	}
	//Checking whethere they can be operated or not
	
	if(row1 != row2 || col1 != col2){
		cout<<"Matrices can't be opeated because they have different dimesnions "<<endl;
		return 0;
	}
	//addition
	cout<<"Result of Addition is : ";
	for(int i =0; i<row1; ++i){
		for(int j=0; j<col1; ++j){
		
				result[i][j] = mat1[i][j] + mat2[i][j];
			
			cout<<result[i][j]<<"";
		}cout<<endl
	;}
	
	
}
