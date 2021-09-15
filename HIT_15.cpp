#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned int n, m ,k, i;
	int sophantu_n, s=0;
	cout<<"nhap n: "; cin>>n;
	cout<<"nhap m: "; cin>>m;
	cout<<"nhap k: "; cin>>k;
	
	
	for(;n!=0;){
        sophantu_n = n % 10;
        s += sophantu_n;
        n /= 10;
    }
    
    while(m != 0){                                 
        i = m % 10;
        m /= 10;
    }
     
    if(k == s + i){
    	cout<<"\nYES";
	}else{
		cout<<"\nNO";
	}

	
}
