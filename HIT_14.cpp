#include<bits/stdc++.h>
using namespace std;
int main(){

	int n, dem = 0;
	
	cout<<" nhap: "; cin>>n;
	for(int i=1; i < n;i++){
		int j = 1;
		int check = 0;
		do{
			
			j *=10;
			if( (i%j )/(j/10) != 4 && (i%j)/(j/10) != 7){
				check =1;
				break;
			}
		}while(i/j != 0);
		if(check == 0){
			cout<<i<<"\t";
			dem++;
		}
	}
	if(dem !=0) cout<<"\n"<<dem;

	return 0;
}
