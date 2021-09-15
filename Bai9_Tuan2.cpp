#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap so nguyen duong n: "; cin>>n;
	if(n<=0){
		cout<<"so khong thoa man"<<endl;
	}
	else{
		int temp=0;
		for(int i=n;i>0;i/=10){
			temp=temp*10+i%10;
		}
		if(temp==n){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}

