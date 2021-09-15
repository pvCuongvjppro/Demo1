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
int check(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i]%2==0 && a[j]%2!=0){
				return 1;
			}
	    }
	}
	return 0;
}
void tach_mang(int a[], int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[j]%2!=0){
//				swap(a[i],a[j]);
//			}
//		}
//	}
	for(int i=0; i<n; i++){
		if(a[i]%2!=0){
			cout<<a[i]<<" ";
		}
    }
	cout<<" - ";
	for(int j=0; j<n; j++){
		if(a[j]%2==0){
			cout<<a[j]<<" ";
		}
	}
}
void sapxep(int a[], int n){
	int tg;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}		

int main(){
	int n, a[100];
	cout<<"nhap n: "; cin>>n;
	nhap_mang(a,n);
	xuat_mang(a,n);
	cout<<"\n";
	if(check(a,n)==1){
		cout<<"\nYES";
	}
	else{
		cout<<"\nNO";
	}
	cout<<"\n";
	if(check(a,n)==1){
		tach_mang(a,n);
	}
	else{
		cout<<"-1";
	}
	cout<<"\n";
	sapxep(a,n);
	xuat_mang(a,n);
}

