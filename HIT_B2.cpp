#include<iostream>
#include<math.h>
using namespace std;
void nhap_n(int &n, int a[]){
	do{
		cout<<"nhap n: "; cin>>n;
	}while(n<3||n>=1000);
}
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
}
void xuatmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\n";
}
int  check_scp(int n){
	int a=sqrt(n);
	if(a*a==n){
	return 1;
	}
	return 0;
}
void sap_xep_tang_dan(int n, int a[]){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	}

void xoa(int &n, int a[], int vtri){
	
	for(int i=vtri;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}

void xoa_not_scp(int &n, int a[]){
	for(int i=0; i<n;i++){
		if(check_scp(a[i])==0){
			xoa(n,a,i);
			i--;
		}
	}
}

int main(){
	int n,a[100],dem=0,vtri;
	nhap_n(n,a);
	nhapmang(n,a);
	cout<<"\n mang ban dau la: ";
	xuatmang(n,a);
	cout<<"\n";
	check_scp(n);
	cout<<"mang co cac so chinh phuong la: ";
	for(int i=0;i<n;i++){
		if(check_scp(a[i])==1){
			cout<<a[i]<<" ";
			dem++;
		}
	}
	if(dem==n){
			cout<<"\nmang toan so chinh phuong";
			sap_xep_tang_dan(n,a);
			cout<<"\nsap xep theo mang tang dan";
			xuatmang(n,a);
	}
	else{
			cout<<"\nmang khong toan so chinh phuong";
			cout<<"\nMang sau khi xoa khong phai chinh phuong la: ";
			xoa(n,a,vtri);
			
			xoa_not_scp(n,a);
			xuatmang(n,a);
	}
	
}
