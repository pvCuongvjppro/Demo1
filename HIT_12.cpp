#include <iostream>
#include <math.h>
using namespace std;
void nhap_mang(float a[], int n){
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
}
void xuat_mang(float a[], int n){
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void tinh(float a[], int n){
	int sum=0;
	int dem=0;
	float tbc;
	for(int i=0;i<n;i++){
		if((int)a[i]%2==0){
			sum+=a[i];
			dem++;
		}
	}
	if(dem==0){
		cout<<"\n-1";
	}
	else{
		cout<<"\ntbc= "<<(float)sum/dem;
	}
}
void sapxep(float a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"\n";
}
void chuyen(float a[], int n){
	for(int i=0;i<n;i++){
		if((int)a[i] %2!=0){
			a[i]=1.23;
		}
	}
	cout<<"\n";
}
int main(){
	int n;
	float a[100];
	cout<<"Nhap n: "; cin>>n;
	nhap_mang(a,n);
	xuat_mang(a,n);
	tinh(a,n);
	sapxep(a,n);
	xuat_mang(a,n);
	chuyen(a,n);
	xuat_mang(a,n);
}

