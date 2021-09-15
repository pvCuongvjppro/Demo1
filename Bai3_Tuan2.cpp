#include<iostream>
using namespace std;
void nhap_n(int &n, float a[]){
	cout<<"Nhap so phan tu trong mang: "; cin>>n;
}
void nhapmang(int n, float a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
		
	}
}
void xuatmang(int n, float a[]){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<"\n";
}
int tim_khoang(int n, float a[]){
	float max=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	
	}
	cout<<"max = "<<max;
	float min=a[0];
	for(int i=1;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
		
	}
	cout<<"\nmin = "<<min;
	cout<<"\n["<<min<< "," <<max<<"]";
}
int main(){
	int n;
	float a[100];
	nhap_n(n,a);
	nhapmang(n,a);
	xuatmang(n,a);
	tim_khoang(n,a);

}

