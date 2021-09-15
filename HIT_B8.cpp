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
void sapxep(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}
void xoa(int a[], int &n){
	for (int i=0; i<n; i++){
		if (a[i]%2!=0&&a[i]<0){
			while(a[i]%2!=0&&a[i<0]&&i<n){
				for (int j=i; j<n-1; j++){
					a[j]=a[j+1];
				}
				n--;
			}
		}
	}
}
int main(){
	int n, a[100];
	cout<<" nhap n: "; cin>>n;
	nhap_mang(a,n);
	xuat_mang(a,n);
	sapxep(a,n);
	cout<<"\nmang sau khi sap xep: ";
	xuat_mang(a,n);
	xoa(a,n);
	cout<<"\nmang sau khi xoa le am: ";
	xuat_mang(a,n);
}

