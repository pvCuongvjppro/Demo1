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
int tim_max(int n, int a[]){
	int max;
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];		
		}
	}
	return max;
}
void lietke(int n, int a[]){
	int max=tim_max(n,a);
	for(int i=0;i<n;i++){
		if(a[i]==max){
			cout<<" "<<i;
		}
	}
} 
int main(){
	int n, a[100];
	nhap_n(n,a);
	nhapmang(n,a);
	xuatmang(n,a);
	tim_max(n,a);
	cout<<"vi tri max lon nhat la: ";
	lietke(n,a);
}

