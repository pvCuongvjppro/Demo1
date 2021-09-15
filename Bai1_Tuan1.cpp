#include<iostream>
using namespace std;
void nhap(int &n){
	cout<<"nhap n: "; cin>>n;
}
bool so_hoan_thien(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	nhap(n);
	so_hoan_thien(n);
	cout<<"cac so hoan thien la : ";
	for(int i=1;i<n;i++){
		if(so_hoan_thien(i)==true){
			cout<<" "<<i;
		}
	}
}

