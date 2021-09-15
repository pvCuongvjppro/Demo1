#include<iostream>
using namespace std;
void nhap_n(int &n, float a[]){
	do{
		cout<<"Nhap 1<=n<=50: "; cin>>n;
	}while(n<1||n>50);
}
void nhap_mang(int n, float a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
}
void xuat_mang(int n, float a[]){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}
void nguoc(int n, float a[]){
	for(int i=n-1;i>=0;i--){
		cout<<" "<<a[i];
	}
}
void tim_x(int n, float a[]){
	float x;
	cout<<"\nNhap x= "; cin>>x;
	int dem=0;
	for(int i=0;i<n;i++){
		if(x==a[i]){
			dem++;
		}
		
	}
	if(dem==0){
		cout<<"\nx khong xuat hien trong mang";
	}
	else{
		cout<<"\nx co xuat hien tren mang";
		cout<<"\nso lan x xuat hien la: "<<dem;
		cout<<"\nx xuat hien o vi tri thu: ";
		for(int i=0;i<n;i++){
			if(x==a[i]){
			cout<<i+1<<" hoac vi tri: a["<<i<<"]";
		}
		}
		
	}
	
}
void vtri_k(int &n, float a[], int k){
	cout<<"\nnhap vi tri xoa k= "; cin>>k;
	for(int i=k-1;i<k+1;i++){
		a[i]=a[i+1];
	}
	n--;
}

int main(){
	int n,k;
	float a[100];
	nhap_n(n,a);
	nhap_mang(n,a);
	xuat_mang(n,a);
	cout<<"\nmang nguoc: "<<endl;
	nguoc(n,a);
	tim_x(n,a);
	
	vtri_k(n,a,k);
	xuat_mang(n,a);

		
}

