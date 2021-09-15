#include<iostream>
using namespace std;
void nhap_mang(int n,int a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
}
void xuat_mang(int &n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
void so_le(int n, int a[]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			cout<<"\t"<<a[i];
			dem++;
		}
	}
	cout<<" \ntong cong co "<<dem<<" so le";
}
void so_chan(int n, int a[]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<"\t"<<a[i];
			dem++;
		}
	}
	cout<<" \ntong cong co "<<dem<<" so chan";
}
void snt(int a[], int n){
	for(int i=0;i<n;i++ ){
		int dem=0;
		for(int j=1;j<=a[i];j++){
			if(a[i]%j==0)
				dem++;
		}
		if(dem==2){
			cout<<a[i]<<"\t";
		}
	}
}
int main(){
	int n,a[100];
	cout<<"nhap so phan tu: "; cin>>n;
	nhap_mang(n,a);
	xuat_mang(n,a);
	cout<<"\nmang so le la: ";
	so_le(n,a);
	cout<<"\nmang so chan la: ";
	so_chan(n,a);
	cout<<"\ncac so nguyen to trong mang la: ";
	snt(a,n);
	
}

