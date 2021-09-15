#include<iostream>
#include<math.h>
using namespace std;
void nhap_n(int &n, float x){
	do{
		cout<<"Nhap 3<n: "; cin>>n;
	}while(n<=3);
}
void nhap_x(int n, float &x){
	do{
		cout<<"Nhap x: "; cin>>x;
	}while(x==0);
}
////CACH DE QUY
//int giaithua(int n){
//	if(n==1){
//		return 1;
//	}
//	else{
//		return n*giaithua(n-1);
//	}
//}
//double tinh(int n, float x){
//	double sum=1, tu=1,mau=1;
//	for(int i=0;i<=n;i++){
//	
//		tu=(float)pow(x,2*i+1);
//		mau=giaithua(2*i+1);
//		sum=sum+pow(-1,i+1)*(tu*1.0/mau);
//	}
//	 cout<<sum;
//}
//float s1(int n, float x){
//	float sum=1-x;
//	int  dau=1;
//	float tu= x;
//	int mau=1;
//	for(int i=3;i<=2*n+1;i+=2){
//		tu *= x*x;
//		mau *= (i-1)*i;
//		sum += tu/mau;
//		dau *= -1;
//	}
//	return sum;
//}
float s1(int n, float x){
	float sum=1-x;
	int  dau=-1;
	float tu= x;
	int mau=1;
	for(int i=3;i<=2*n+1;i+=2){
		mau *= (i-1)*i;
		sum += pow(x,i)/mau;
		dau *= -1;
	}
	return sum;
}
int main(){
	int n;
	float x;
	nhap_n(n,x);
	nhap_x(n,x);
//	cout<<"gia tri cua ham tinh = "<<tinh(n,x);
//	tinh(n,x);
	cout<<"gia tri = "<<s1(n,x);
}

