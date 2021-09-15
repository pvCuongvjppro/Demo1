#include<iostream>
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
bool shh(int n){
	int s=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			s +=i;
		}
	}
	if(s==n){
		return true;
	}
	return false;
}
int KhoangCach(int n, int a[]){
	int min, max;
	min=max=a[0];
	for(int i=0;i<n;i++){
	
		if(max<a[i]){
			max=a[i];
		}
	
		if(min>a[i]){
			min=a[i];
		}
	}
	int x=max-min;
	cout<<"X= "<<x;
	return x;
}
void xoa(int &n, int a[], int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
void XoaSoLe(int &n, int a[]){
	for(int i=0;i<n;i++){
		if(a[i]%2 != 0){
			xoa(n,a,i);
			i--;
		}
	}
}

int main(){
	int n,a[100];
	nhap_n(n,a);
	nhapmang(n,a);
	xuatmang(n,a);
	int dem=0;
	for(int i=0;i<n;i++){
		if(shh(a[i])==true){
			dem++;
		}
	}
	if(dem == n){
		cout<<"Khoang cach: "<<KhoangCach(n,a)<<endl;
	}
	else{
		XoaSoLe(n,a);
		cout<<"Xoa so le: ";
		xuatmang(n,a);
	}
}

