#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	srand(time(NULL));
	while(true){
		int somay=1+rand()%100; // rand()%100 chay tu 1->99
		cout<<"Chuong trinh choi Game doan so!\n";
		cout<<"May da doan so trong doan tu [1...100], moi ban doan!: \n";
		int solandoan=0;
		bool iswin=false;
		do{
			int songuoi;
			cin>>songuoi;
			solandoan++;
			cout<<"ban doan lan thu: "<<solandoan<<endl;
			if(songuoi==somay){
				cout<<"HAHA dung roi, so may= "<<somay<<endl;
				iswin=true;
				break;//thang va ngung vong lap
			}
			else if(songuoi>somay){
				cout<<"so cua nguoi > so cua may"<<endl;
			}
			else if(songuoi<somay){
				cout<<"so cua nguoi < so cua may"<<endl;
			}	
			if(solandoan==7) break;
		}while(true);
		if(iswin!=true){
			cout<<"GAME OVER!\n";
			cout<<"so may la: "<<somay<<endl;
		}
 		cout<<"Ban co muon choi tiep khong(c/k):";
		char c;
		cin>>c;
		if(c=='k') break;//ngung game
	}
	cout<<"GOODBYE!";
}

