#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
//Write your code here.
T a[N];
int num;
for(int k=0;k<N;k++){
	a[k] = d[k];
}
for(int i=1;i<N;i++){
	for(int k=0;k<N;k++){
		if(k==i){
			cout << "[" << d[k] << "]";
		}else{
			cout << " " << d[k] << " ";
		}
	}
	cout << " => ";
	for(int j=i;j!=0;j--){
		if(a[j]<=a[j-1]){
			num = j;
			break;
		}
		if(a[j]>a[j-1]){
			swap(a,j,j-1);
			num = j-1;
		}
	}
	for(int k=0;k<N;k++){
		d[k] = a[k];
		if(num==k){
			cout << "[" << a[k] << "]";
		}else{
			cout << " " << a[k] << " ";
		}
	}
	cout << "\n";
}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
