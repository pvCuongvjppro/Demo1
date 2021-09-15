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
int snt(int n){
	int dem=0;
	if(n<2){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int kt1(int n, int a[]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(snt(a[i])==1){
			return a[i];
		}
	}
	return -1;
}
	

bool so_hoan_thien(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		return true;
	}else{
		return false;
	}
}
int kt2(int n, int a[]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(so_hoan_thien(a[i])==true){
			return a[i];
		}
		
	}
	return -1;
}
int main(){
	int n, a[100];
	nhap_n(n,a);
	nhapmang(n,a);
	xuatmang(n,a);
	snt(n);
	cout<<"\nso nguyen to dau tien cua mang la: "<<kt1(n,a);
	so_hoan_thien(n);
	cout<<"\nso hoan hao dau tien cua mang la: "<<kt2(n,a);
}

