#include<iostream>
using namespace std;
void nhap_mang(int n,int a[]){
	int i=0;
	// hoac for(i=0;i<n;i++)
	while(i<n){
		cout<<"Nhap a["<<i<<"]= "; cin>>a[i];
		if(i>0 && a[i]<=a[i-1]){
			//tat ca cac lenh trong than vong lap gap lenh continue se bo qua o lan lap hien tai, vong lap chuyen san kiem tra dieu kien va tiep tuc lap
			continue;
		}i++;
	}
}
void xuat_mang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
int main(){
	int n,a[100];
	cout<<"nhap so phan tu: "; cin>>n;
	nhap_mang(n,a);
	xuat_mang(n,a);
}

