#include<iostream>  //O(n) is time complexity

using namespace std;

void fac(int);

void fac(int n){
	
	cout<<"Factors of"<<n<<"is"<<endl;
	for(int i =1; i<=n ; i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}

}

void facto(int n, int i){
	
	if(i<=n){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
	
	facto(n, i+1); 
	
}

int main()
{
	int num;
    
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"Factors without using recusrrion"<<endl;
	fac(num);
	cout<<endl;
	cout<<"factors using recussrion"<<endl;
	facto(num,1);
	return 0;
	
	
}
