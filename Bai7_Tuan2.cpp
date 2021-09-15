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
void DuaChanVeDau(int a[], int vitridoi){
	int temp=a[vitridoi]; //bien tam luu tat ca cac gia tri thoa man
	for(int i=vitridoi;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=temp;
}
void Dua0VaoGiua(int a[], int vitridoi, int vitrichancuoi){
	//Do 0 nam giua mang nen 0 se la gtri chan cuoi de thoa man yeu cau;
	for(int i=vitridoi; i> vitrichancuoi;i--){
		a[i]=a[i-1];
	}
	a[vitrichancuoi]=0;
}
void DuaChanVeDauLeVeCuoi0NamGiuaMang(int n, int a[])
{
    int i, dem;
    int ViTriChanCuoi = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] != 0)
        {
            DuaChanVeDau(a, i);
        }
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            ViTriChanCuoi = i;
            break;
        }
    }
    for(i; i < n; i++) // bo khoi tao i de tranh du mot so `0
    {
        if(a[i] == 0)
        {
            Dua0VaoGiua(a, i, ViTriChanCuoi);
        }
    }
}
int main(){
	int n, a[100];
	nhap_n(n,a);
	nhapmang(n,a);
	xuatmang(n,a);
	DuaChanVeDauLeVeCuoi0NamGiuaMang(n,a);
	cout<<"Mang sau khi dua chan ve dau 0 o giua le o cuoi: ";
	xuatmang(n,a);
}

