#include<iostream>
using namespace std;
void nhap_n(int &n, int a[]){
	cout<<"Nhap so phan tu trong mang: "; cin>>n;
}
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
		
	}
}
void xuatmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<"\n";
}
void hoanvi(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
void daonguoc(int n, int a[]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]%2==0&&a[j]%2==0){
				hoanvi(a[i],a[j]);
			}
		}
	}
}
int main(){
	int n, a[100];
	nhap_n(n,a);
	nhapmang(n,a);
	xuatmang(n,a);
	daonguoc(n,a);
	cout<<"mang sau khi dao nguoc so chan: ";
	xuatmang(n,a);
}

