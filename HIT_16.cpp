#include<iostream>
using namespace std;
void nhap(int &a, int &b){
	cout<<"nhap tu a: "; cin>>a;
	cout<<"Nhap mau b: "; cin>>b;
}
int ucln(int a, int b) {
	if(a < 0) {
		a = a*-1;
	}
	if(b < 0) {
		b *= -1;
	}
	while(a != b) {
		if(a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	return a;
}
int rutGon(int a, int b){
	if(a!=0){
		int u=ucln(a,b);
		a /= u;
		b /= u;
	}
	cout<<a<<"/"<<b;
}
int main(){
	int a,b;
	nhap(a,b);
	ucln(a,b);
	rutGon(a,b);
}

