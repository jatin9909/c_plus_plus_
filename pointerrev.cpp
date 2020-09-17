#include<iostream>
using namespace std;

void rev(int *);
int n; 

int main(){
	
	cout<<"Enter how many elements you want in array"<<endl;
	cin >>n;
	
	int *ptr=new int[n];
	
	cout<<"Enter numbers in array"<<endl;
	for(int i=0; i<n; i++){
		cin>>ptr[i];
	}
	rev(ptr);
	
	cout<<"Elements in reverse orders"<<endl;
	for(int j=0; j<n; j++){
		cout<<ptr[j]; 
	}
	

return 0;
}

void rev(int *p){
	int temp;
	
	for(int i=0, j=n-1; i<n/2; i++, j--){
		temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
		
	}
}
