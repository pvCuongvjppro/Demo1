#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	//khai bao ngau nhien
	srand(time(NULL));

	int row, col;
	// hoac khai bao truc tiep
//	for(int i=0;i<row;i++){
//		for(int j=0;j<col;j++){
//			cout<<"m["<<i<<"]["<<j<<"]";
//			cin>>M[i][j];
//		}
//	}
	cout<<"Nhap so dong: "; cin>>row;
	cout<<"Nhap so cot: "; cin>>col;
	int M[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			M[i][j]=rand()%100;
		}
	}
	cout<<"mang sau khi nhap ngau nhien:\n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<M[i][j]<<"\t";
		}
		cout<<"\n"; 
	}
	cout<<"Ban muon xuat dong nao";
	int r;
	cin>>r;
	for(int j=0;j<col;j++){
		cout<<M[r][j]<<"\t";
	}
	cout<<"\nBan muon xuat cot nao";
	int c;
	cin>>c;
	for(int i=0;i<row;i++){
		cout<<M[i][c]<<"\t";
	}
	if(row==col){
		cout<<"\nDuong cheo chinh:\n";
		for(int i=0;i<row;i++){
			cout<<M[i][i]<<"\t";
		}
		cout<<"\nDuong cheo phu:\n";
		for(int i=0;i<row;i++)
			cout<<M[i][row-i-1]<"\t";
	}
}

