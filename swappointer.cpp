#include<iostream>

using namespace std;

void swap(int *, int *);

void swap(int *x , int *y){
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
	
	cout<<"Numbers after swapping num1-"<<*x<<" num2- "<<*y; 
	
}

int main(){
	int x,y;
	
	cout<<"Enter num1 "<<" num2 "<<endl;
	cin>>x>>y;
	
	cout<<"Number before swaping- num1-"<<x<<" num2-"<<y<<endl;
	
	swap(&x, &y);
	cout<<endl;
	
	cout<<"Number are still same as above because of call by reference num1-"<<x<<" num2-"<<y<<endl;
	return 0;
	
}
