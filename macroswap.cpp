#include<iostream>

using namespace std;

#define SWAP(x,y) {int z; z=x; x=y; y=z;}
int main()
{   int a,b,c=0,swap;
	cout<<"Enter the value of num1 and num2"<<endl;
	cin>>a>>b;
	
    cout<<"Values before swap num1-"<<a<<", num2-"<<b<<endl;
    
    SWAP(a,b);
    cout<<"Values after swap num1-"<<a<<", num2-"<<b<<endl;
    return 0;
}
