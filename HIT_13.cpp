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
void chuyen(int a[], int n){
	for(int i=0;i<n;i++){
		
		if(a[i] % 2 ==0 && a[i] != 0){
			while(a[i]%2==0){
				a[i]=a[i]/2;
			}
		}
	}
}
int snt(int n){
	if(n<2)
		return 0;
	for(int i=2;i*i<=n;i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}
void check(int a[], int n){
	int x,y;
	for (int i=0; i<n; i++){
		if (snt(a[i])==0){
			int dem1=0;
			for (int j=a[i]; j>=sqrt(a[i]); j--){
				dem1++;
				if (snt(j)==1){
					x=j;
					break;
				}
			}
			int dem2=0;
			for (int k=a[i]; k<1000; k++){
				dem2++;
				if (snt(k)==1){
					y=k;
					break;
				}
			}
			if (dem1==dem2){
				a[i]=x;
			}
			if (dem1>dem2){
				a[i]=y;
			}
			if (dem1<dem2){
				a[i]=x;
			}
		}
	}
}
int main(){
	int n, a[100], b[100];
	cout<<"nhap n: "; cin>>n;
	nhap_mang(a,n);
	xuat_mang(a,n);
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	
	chuyen(a,n);
	cout<<"\n";
	xuat_mang(a,n);
	cout<<"\n";
	check(b,n);
	xuat_mang(b,n);
}

