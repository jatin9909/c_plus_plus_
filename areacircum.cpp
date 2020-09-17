#include<iostream>

using namespace std;

double cal(double, double *, double*);

double cal(double r,double *a, double *c){
	 *a = 3.14*r*r;
	 *c = 2*3.14*r; 
}

int main(){
	double r;
	double a, c;
	
	cout<<"Enter the radius"<<endl;
	cin>>r;
	
	cal(r,&a, &c);
	cout<<"The area is "<<a<<" The circumfrence "<<c<<endl;
	
	
	return 0;
}
