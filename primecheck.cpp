#include<iostream>  //O(n) and O(n*n) for prime upto pr;

using namespace std;

bool check(int n);  

bool check(int n){
	
	if(n<=1){
		return false;
	}
	
	for(int i = 2 ; i<n; i++){
    
	if(n%i==0){
		return false;
		break;
	}
   }
   return true;
}

int main(){
	int n,pr,i;
	bool res;
	
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	//
	
	if(check(n)){
		cout<<"Entered number is prime"<<endl;
		
	}
	else{
		cout<<"Entered number is not prime"<<endl;
	}
	
	cout<<"UPto where you want prime number"<<endl;
	cin>> pr;
	
	if(pr<=1){
		cout<<"1 or less than 1 are not prime numbers"<<endl;
	}
    
    cout<<"prime numbers upto"<<pr<<"are"<<endl;
	for(i = 2; i<=pr ; i++){
			if(check(i)){
				 cout<<i<<" ";
			}
		}
		
	
		

return 0;
}
