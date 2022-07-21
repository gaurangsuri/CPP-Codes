#include<iostream>
using namespace std;
int main(){
	//matrix creation
	int rowfirst,columnfirst,rowsecond,columnsecond;
	jump1:
	cout<<"enter number of rows and columns of the first matrix"<<endl;
	cin>>rowfirst>>columnfirst;
	cout<<"enter number of rows and columns of the second matrix"<<endl;
	cin>>rowsecond>>columnsecond;
	if(columnfirst!=rowsecond){
		cout<<"columns of the first matrix dont match the rows of the second matrix.. enter data again!"<<endl;
		goto jump1;
	}
	int matrixfirst[10][10];
	int matrixsecond[10][10];
	//data-entry into the matrix
	for(int i=0;i<rowfirst;i++){
		for(int j=0;j<columnfirst;j++){
			cout<<"enter data of the first matrix at A"<<i<<j<<" - ";
			cin>>matrixfirst[i][j];
		}
	}
	for(int i=0;i<rowsecond;i++){
		for(int j=0;j<columnsecond;j++){
			cout<<"enter data of the second matrix at A"<<i<<j<<" - ";
			cin>>matrixsecond[i][j];
		}
	}
	//new final matrix initialization
	int finalmatrix[10][10];
	for(int i=0;i<rowfirst;i++){
		for(int j=0;j<columnsecond;j++){
			finalmatrix[i][j]=0;
		}
	}
	// begin matrix multiplication
	for(int i=0;i<rowfirst;i++){
		for(int j=0;j<columnsecond;j++){
			for(int k=0;k<columnfirst;k++){
				finalmatrix[i][j] = finalmatrix[i][j] + ( matrixfirst[i][k]*matrixsecond[k][j] );
			}
		}
	}
	//print out new matrix
	cout<<endl;
	for(int i=0;i<rowfirst;i++){
		for(int j=0;j<columnsecond;j++){
			cout<<finalmatrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
