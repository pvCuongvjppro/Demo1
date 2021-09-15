#include<iostream>
#include<iomanip>
using namespace std;
int nhap_n(){
	int n;
	do{
		cout<<"Nhap n (1<=n<=50): "; cin>>n;
	}while(n<1||n>50);
	return n;
}
void nhap_mang(float a[], int n){
	cout<<"Nhap mang "<<n<<" so thuc\n";
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
}
void hien_thi_mang(float a[], int n) {
	for (int i = 0; i < n; i++){
		cout<< setprecision(3)<<" "<<a[i];
	}
	cout<<"\n";
}
void sap_xep(float a[], int n) {
	int i, j, tg;
	for (i = 0; i < n-1; i++)
		for (j = i+1; j < n; j++)
			if (a[i] > a[j]) {
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
	//swap(a[i],a[j])
			
}
void hien_thi_2_dong(float a[], int n){
	cout<<"\nHien thi mang hai dong ";
	for(int i=0;i<n;i++){
		if(a[i]>0)
		cout<<setprecision(3)<<" "<<a[i];
	}
	cout<<"\ncac so con lai: ";
	for(int j=0;j<n;j++){
		if(a[j]<=0)
		cout<<setprecision(2)<<" "<<a[j];
	}
	cout<<"\n";
}
//chen khong lam thay doi thu tu
void chen(float a[], int &n){
	float x;
	cout<<"nhpa so can chen x"; cin>>x;
	int i = n-1;
	while (i>-1 && a[i]>x){
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=x;
	n=n +1;
}

int main(){
	int n=nhap_n();
	float a[50];
	nhap_mang(a,n);
	hien_thi_mang(a,n);
	hien_thi_2_dong(a,n);
	sap_xep(a,n);
	cout<<"Mang sau khi sap xep: "; hien_thi_mang(a,n);
	chen(a,n);
	cout<<"Mang sau khi chen: "; hien_thi_mang(a,n);
}

