#include<iostream>
#include<algorithm> //thu vien de swap co san 
using namespace std;
void nhap_mang(int n,int a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
}
void xuat_mang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
void sap_xep_tang_dan(int n, int a[]){
	//sap xep noi bot phan tu nang hon se chim xuong duoi
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
				swap(a[i],a[j]);
			}
		}
	}
	
}
void sap_xep_giam_dan(int n, int a[]){

	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
				swap(a[i],a[j]);
			}
		}
	}
	
}

int main(){
	int a[100];
	int n;
	cout<<"nhap so phan tu: "; cin>>n;
	nhap_mang(n,a);
	xuat_mang(n,a);
	cout<<"\nmang sap xep tang dan"<<endl;
	sap_xep_tang_dan(n,a);
	xuat_mang(n,a);
	cout<<"\nmang sap xep giam dan"<<endl;
	sap_xep_giam_dan(n,a);
	xuat_mang(n,a);

}

