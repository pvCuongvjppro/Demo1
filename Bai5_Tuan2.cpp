#include<iostream>
using namespace std;
void nhap_n(int &n, int a[]){
	cout<<"Nhap so phan tu trong mang: "; cin>>n;
}
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
		
	}
}
void xuatmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<"\n";
}
void xoa1pt(int &n, int a[], int vtxoa)
{
    for(int i = vtxoa; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void XoaCacPhanTuTrungNhau(int &n, int a[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                xoa1pt(n,a, j);
                j--;
            }
        }
    }
}
int main(){
	int n, a[100];
	nhap_n(n,a);
	nhapmang(n,a);
	xuatmang(n,a);
	XoaCacPhanTuTrungNhau(n,a);
	cout<<"mang sau khi xoa cac phan tu trung nhau: ";
	xuatmang(n,a); 
}

