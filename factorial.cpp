#include<iostream>
using namespace std; 

int fact(int);
int  factrec(int);

int fact(int n){
	int fact=1; 
	for(int i=n ; i>=1 ; i--){
		fact*=i; 
	}
	
	return fact; 
}

int factrec(int n){
	if(n==0)
	  return 1;
	  
	return n*factrec(n-1);   
}

int main(){
	int n;
	
	cout<<"Enter number of which you want to calculate factorial"<<endl;
	cin>>n; 
	
	cout<<"Factotial without recusrion is "<<fact(n)<<endl; 
	cout<<"Factorial with using recusrion "<<factrec(n)<<endl;
	return 0;
}
