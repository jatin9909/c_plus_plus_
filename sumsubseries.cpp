#include <iostream>

using namespace std;

int sum(int n);

int sum(int n){
	int sum=0;
	
	for(int i=1; i<=n; i++){
		if(i%2!=0){
			sum=sum+i;
		}
		else{
			sum=sum-i;
		}
		
	}
	return sum;
}

int main(){
	int num;
	
	cout<<"Enter the number upto which you want to calculate sum"<<endl;
	cin>>num;
	
	cout<<"Result-"<<sum(num)<<endl;
	
	return 0;
}
