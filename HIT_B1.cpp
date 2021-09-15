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
int ktsnt(int n){
	if(n<2)
		return 0;
	for(int i=2;i*i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int ShowAllSnt(int n, int a[]){
	for(int i=0;i<n;i++){
		int t=a[i];
		int ok=1;
		while(t>0){
			int temp=t%10;
			t /=10;
			if(ktsnt(temp)==0){
				ok=0;
				break;
			}
		}
		if(ok==1)
			cout<<a[i]<<" ";
	}
}
int SumAllSSnt(int n, int a[]){
	int s=0;
	for(int i=0;i<n;i++){
		int t=a[i];
		int ok=1;
		while(t>0){
			//chinh no la snt
			if(ktsnt(t)==0){
				ok=0;
				break;
			}
			int temp =t % 10;
			t/=10;
			if(ktsnt(temp)==0){
				ok=0;
				break;
			}
		}
		if(ok==1)
			s+=a[i];
	}
	return s;
}
int main(){
	int n, a[100];
	nhap_n(n,a);
	nhapmang(n,a);
	cout<<"mang sau khi nhap: \n";
	xuatmang(n,a);
	ShowAllSnt(n,a);
	cout<<"tong sieu snt= "<<SumAllSSnt(n,a);
	
}

