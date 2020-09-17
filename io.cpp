#include <iostream>
#include <vector>

using namespace std; 

void fibo(int);
int fiborec(int); 

void fibo(int n){
	int t1=0, t2=1, nextterm=0; 
    for(int i =1; i <= n ; i++){
    	
    	if(i==1){
    		cout<<t1<<" "; 
    		continue; 
		}
		if(i==2){
			cout<<t2<<" ";
			continue; 
		}
		nextterm=t1+t2; 
		t1=t2; 
		t2=nextterm; 
		
		cout<<nextterm<<" "; 
	}
	 	
   	
}

int fiborec(int n){
	
	if(n<=1)
	return n; 
	
    return (fiborec(n-1)+fiborec(n-2)); 	
}

int main(){

    int n , m=0;
	
	cout<<"Enter how many terms you want in fibonacci series"<<endl;
	cin>>n;
	cout<<endl;
	
	cout<<"fibonacci without using recurssion"<<endl;
	fibo(n); 
	cout<<endl;
	
	cout<<"fibonacci with using recussion"<<endl;
	
	for(int i = 1; i<=n ; i++){
	cout<<fiborec(m)<<" ";
	m++; 
    }
	
	
	return 0; 
}
