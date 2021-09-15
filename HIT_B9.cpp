#include <iostream>
#include <math.h>
using namespace std;
void nhap_mang(int x[], int n){
	for (int i=0; i<n; i++){
		cin>>x[i];
	}
}
void xuat_mang(int x[], int n){
	for (int i=0; i<n; i++){
		cout<<x[i]<<" ";
	}
}

bool snt(int n) {
	if(n<=1) 
	    return false;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0)
			return false;
	}
	return true;
}
void Chen(int x[], int &n, int vt, int b){
  	for(int i=n;i>=vt;i--){
	   x[i]=x[i-1];
	}
   	x[vt]=b;
   	n++;
}
void chen_b(int x[], int &n, int k){
	if(snt(k)==true)
		cout<<"khong the chen b";
	else{
			for(int i=0; i<n; i++){
			if(snt(x[i])){
				Chen(x, n, i, k);
				i++;
			}
		}
	}
}
int main(){
	int n,b;
	int x[100];
	cout<<"nhap n: "; cin>>n;
	nhap_mang(x,n);
	xuat_mang(x,n);
	cout<<"\nnhap b: "; cin>>b;
//	for(int i=0;i<n;i++){
//		if(snt(x[i])==true){
//			if(snt(b) == true){
//				cout<<"\nkhong the chen duoc b";
//				break;
//			}
//			else{
//				Chen(x,n,b,i);
//				i++;
//			}
//		}
//	}
	chen_b(x,n,b);
	xuat_mang(x,n);
}

