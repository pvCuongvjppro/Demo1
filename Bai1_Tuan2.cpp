#include<iostream>
using namespace std;
int main(){
	int t;
	int gio, phut, giay;
	cout<<"Nhap so giay: ";
	cin>>t;
	gio=(t/3600)%24;
	phut=(t%3600)/60;
	giay=(t%3600)%60;
	int hourtemp=gio;//>12?gio-12:gio;
	if(gio>12){
		hourtemp=gio-12;
	} 
	else{
		cout<<"0";
		hourtemp=gio;
	}
	
	cout<<hourtemp<<":"<<phut<<":"<<giay<<(gio>12?" PM":" AM")<<endl;
}
