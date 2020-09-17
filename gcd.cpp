#include<iostream>
using namespace std; 


int gcd(int n , int m){
	int res=1, temp;
	 
	if(n==0)
	  return m; 
	  
	if(m==0)
	  return n; 
	  
	if (n==m)
	  return n; 
	      
	if(m>n){     //swapping n and m if m is greater
		temp=m;  //becuase we want to run loop upto smallest number
		m=n;
		n=temp; 
	}
	
	for(int i = 1; i<m ; i++){
		if(n%i==0 && m%i==0)
		res=i; 
	}
	
	return res; 
}


int gcdrec(int n , int m){
	if(n==0)
	  return m; 
	  
	if(m==0)
	  return n; 
	  
	if (n==m)
	  return n; 
	  
	if(n>m)
	  return gcdrec(n-m, m); 
	 
	return gcdrec(n, m-n);     
}



int main(){
	int n,m, res=1, temp; 
	cout<<"Enter numbers of which you want to find GCD"<<endl;
	cin>>n>>m;   //here we assuming n is greater than m
	cout<<"GCD without recusrion "<<gcd(n,m)<<endl; 
	cout<<"GCD with recusrion "<<gcdrec(n,m)<<endl;
	
	
	return 0 ; 
}
