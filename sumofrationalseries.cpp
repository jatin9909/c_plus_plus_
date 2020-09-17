#include <iostream>

using namespace std;

double sum(int n);

double sum(int n){
	double sum=0.0;
	
	for(double i = 1; i<=n; i++){
		sum=sum+(1/i);
		
	}
	return sum;
}

int main(){
	
	int num;
	
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<"Result"<<sum(num)<<endl;
	
	return 0;
}
