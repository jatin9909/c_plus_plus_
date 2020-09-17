#include<iostream>
using namespace std;

int main(){
	int row;
	int k=0;
	cout<<"Enter the number of row you want"<<endl;
	cin>>row; 
	
	for(int i=1; i<=row; ++i, k=0){
		for(int space=1; space<=row-i; ++space){
			cout<<" ";
		}
		while(k!=2*i-1){
		cout<<"*";
		++k;
		}
		cout<<endl;
		}
	
	return 0;
}
