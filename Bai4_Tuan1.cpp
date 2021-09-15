#include<iostream>
using namespace std;
void nhap_mang(int n,int a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
}
void xuat_mang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
void max_value(int n, int a[]){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<"\nMAX= "<<max<<endl;
}
void min_value(int n, int a[]){
	int min=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<"\nMIN= "<<min<<endl;
}
void tong(int n, int a[]){
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=a[i];
	}
	cout<<"\ntong cac phan tu trong mang la: "<<tong;
}
int main(){
	int n,a[100];
	cout<<"nhap so phan tu: "; cin>>n;
	nhap_mang(n,a);
	xuat_mang(n,a);
	max_value(n,a);
	min_value(n,a);
	tong(n,a);
}

