#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u,double a,double t){
	double s = u*t+0.5*a*pow(t,2);
	return s;
}

int main(){
	double u;
	double a;
	double t;
	cout<<"U = ";
	cin>>u;
	cout<<"A = ";
	cin>>a;
	cout<<"T = ";
	cin>>t;
	
	cout<<"Distance = "<<findDistance(u,a,t);
}
