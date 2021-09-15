#include<iostream>
using namespace std;
void nhap(int &n){
	cout<<"nhap n= "; cin>>n;
}
int ktsnt(int n){
	int dem=0;
	if(n<2){
		
		return 0;
	}
	
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			dem++;
	}
		if(dem==0){
		
			return 1;
		}
		else{
			
			return 0;
		}
//	hoac if(n%i==0){
//		return 0}
//	}return 1;
}
void tong(int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(ktsnt(i)==1){
			cout<<" "<<i;
			tong += i;
		}
		
	}
	
	cout<<"\ntong cua chung la: "<<tong;
}
int day(int n){
	int i,dem=0;
	for(i=0;dem<n;i++){
		if(ktsnt(i)==1){
			cout<<i<<" ";
			dem++;
		}
	}
}
int main(){
	int n;
	nhap(n);
	if(ktsnt(n)==1){
		cout<<n<<" la so nguyen to";
	}
	else{
		cout<<n<<" khong phai la so nguyen to";
	}
	cout<<"\n cac so nguyen to nho hon "<<n<<" la: ";
	tong(n);
	cout<<"\nday so nguyen to n la:";
	day(n);
}

