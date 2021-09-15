#include <iostream>
#include <math.h>
using namespace std;
void nhap_mang(int a[], int n){
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
}
void xuat_mang(int a[], int n){
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void nhap_x(int &x){
	cout<<"Nhap x: "; cin>>x;
	
}
void dem(int a[], int n, int x){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]<x){
			dem++;
		}
	}
	cout<<"so phan tu nho hon x la: "<<dem;
}
void tbc(int a[], int n){
	int dem=0;
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]%3==0 && a[i]%5!=0 ){
			sum+=a[i];
			dem++;
		}
		
	}
	cout<<"\ntbc = "<<sum*1.0/dem;
}
int kt1(int a[], int n){
	int dem=0;
	for(int i=0; i<n-1; i++){
		if(a[i]<a[i+1]){
		   dem++;
	    }
	}
	if(dem==n-1){
		return 1;
	}
	else{
		return 0;
	}		
}
int kt2(int a[], int n){
	int dem=0;
	for(int i=0; i<n-1; i++){
		if(a[i]>a[i+1]){
		   dem++;
	    }
	}
	if(dem==n-1){
		return 1;
	}
	else{
		return 0;
	}		
}
int main(){
	int n,x,a[100];
	cout<<"nhap n: "; cin>>n;
	nhap_mang(a,n);
	xuat_mang(a,n);
	nhap_x(x);
	dem(a,n,x);
	tbc(a,n);
	if(kt1(a,n)==1 || kt2(a,n)==1){
		cout<<"\nYES";
	}
	else{
		cout<<"\nNO";
	}
}

