#include<iostream>
#include<string.h>
using namespace std;
void NhapChuoi(char s[]){
	cout <<"Nhap Chuoi  ";
	gets(s);
	cout <<" Da Nhap Vao: "<< s<<endl;
}
//void ChuanHoa( char s[]){
//Chuan hoa toan bo
//	while (a[0]==' ') strcpy(&a[0], &a[1]);
//	while(a[strlen(a)-1]==' '){
//	
//		a[strlen(a)-1] = '\0';
//	}
//	for(int i =0; i<strlen(a)-1;i++)
//		if(a[i]==' '&&a[i+1]==' '){
//			strcpy(&a[i],&a[i+1]);
//			i--;
//		}
//	strlwr(a);
//	a[0]=toupper(a[0]);
//	for(int i=0;i< strlen(a)-1;i++)
//		if(a[i]==' ') a[i+1]=toupper(a[i+1]);
//	
//}
////Xoa Theo Chi So
//void DeleteSpace(char s[], int pos){
//	for(int i=pos;i<strlen(s)-1;i++){
//		s[i]=s[i+1];
//	}
//	//n--; \0
//	s[strlen(s)-1]='\0';
//}
//void DeleteAllSpace(char s[]){
//	//xoa khoang trang o dau
//	while(s[0]==' '){
//		DeleteSpace(s,0);
//	}
//	//xoa khoang trang giua cuoi
//	for(int i=0;i<strlen(s); i++){
//		if(s[i]==' '&&s[i+1]==' '){
//			DeleteSpace(s,i);
//			i--;
//		}
//	}
//}
////Xoa Theo Vi Tri
void DeleteSpace(char s[],int pos){
	for(int i=pos-1;i<strlen(s)-1;i++){
		s[i]=s[i+1];
	}
	//n--; \0
	s[strlen(s)-1]='\0';
}
void DeleteAllSpace(char s[]){
	//xoa khoang trang o dau
	while(s[0] == ' '){
		DeleteSpace(s, 1);
	}
	//xoa khoang trang giua cuoi
	for(int i=1; i<strlen(s); i++){
		if(s[i] == ' ' && s[i+1] == ' '){
			DeleteSpace(s, i+1);
			i--;
		}	
	}
}


void ChargeChar(char s[]){
	//chuyen ve viet thuong
	strlwr(s);
	//viet hoa ki tu dau tien 
	s[0] -= 32;
	for(int i=1; i<strlen(s)-1; i++){
		if(s[i] == ' ' && s[i+1] != ' ')
			s[i+1] -= 32;
	}
}
int main(){
	char s[100];
	NhapChuoi(s);
	DeleteAllSpace(s);
	ChargeChar(s);
//	ChuanHoa(s);
	cout<<s<<endl;
}

