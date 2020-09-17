#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int n; 
	cout<<"Enter value of n"<<endl;
	cin>>n; 

int count=0; 
        int sum = 0 ;
        while(n!=0){
            count++; 
            n/=10; 
        }
        
        for(int i = n ; i>0 ; i/10){
        
           
           int x = i%10; 
           
           sum += (pow(x , count));
        }
        
        if(sum == n){
            cout<< " armstrong Yes"; 
            
        }
        else{
            cout<<" armstrong No"; 
        }
        
        return 0; 
    }
