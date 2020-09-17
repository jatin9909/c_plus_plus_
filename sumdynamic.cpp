#include<iostream>
using namespace std;

int sum(int , int);

int sum(int *ptr, int n){
	
	int sum=0;
	for(int i = 0 ; i<n; i++){
		sum+=ptr[i];
	}
	return sum; 
}

int main(){
	int n;
	
	cout<<"Enter how many numbers you want to enter"<<endl;
	cin>>n ;
	
	int *ptr = new int [n];
	cout<<"Enter numbers"<<endl;
	for(int i = 0 ; i<n; i++){
		cin>>ptr[i];
	}
	int res= sum(ptr,n);
	
	cout<<"The sum of n elements is "<<res<<endl;
	 
	 return 0;
}
