#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	srand(time(NULL));
	int a=rand()%1000;
	cout<<a;
}

