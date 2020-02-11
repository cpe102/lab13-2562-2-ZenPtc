#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double a[][N]){
	for(int i=0;i<N;i++){
		cout << "Row " << i+1 << ": ";
		for(int j=0;j<N;j++){
			cin >> a[i][j];
		}
	}
}

void findLocalMax(const double a[][N], bool x[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==0 or i == N-1 or j==0 or j== N-1){
				x[i][j] = false;
			}else if(a[i][j]<a[i][j-1] or a[i][j]<a[i][j+1]){
				x[i][j] = false;
			}else if(a[i][j]<a[i-1][j] or a[i][j]<a[i+1][j]){
				x[i][j] = false;
			}else x[i][j] = true;
		}
	}
}

void showMatrix(const bool a[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(a[i][j]==0){
				cout << "0 ";
			}else{
				cout << "1 ";
			}
		}
		cout << endl;
	}
}