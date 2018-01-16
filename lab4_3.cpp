#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x){
	int y = 2;
	while(x%y>0){
		y++;
	}
	return y;
}
int main(){
	int z;
	cout<<"Input = ";
	cin>>z;
	
	if(z>1){
		cout<<"Expected = "<<findDivisor(z);
	}
	return 0;
}
