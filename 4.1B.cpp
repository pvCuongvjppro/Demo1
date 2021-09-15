#include<iostream>
using namespace std;
void nhap(int a[][100], int &m, int &n){// m la so hang, n la so cot
	cout<<"Nhap so doi: "; cin>>n;
	cout<<"Nhap so tran: "; cin>>m;
	int dem=1;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"so diem tran "<<dem"cua d"<<endl;
			cin>>a[i][j];
			dem++;
		}
	}
}
void show(int a[][100], int m, int n){// m la so hang, n la so cot

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int m,n;
	int a[100][100];
	nhap(a,m,n);
	show(a,m,n);
}

