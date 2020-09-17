#include <iostream>

using namespace std; //O(n) is time complexity

int reverse(int n);

int reverse(int n){
	int rev_num = 0;
	
	while(n!=0){
	
	rev_num = rev_num*10 + n%10;
	n = n/10;
    }
    
    return rev_num; 

}


int main()
{
	int n, count=0,size;
	
	cout<<"Write a number you want to reverse"<<endl;
	cin>>n;
	cout<<"The reverse number is"<<reverse(n)<<endl;
	
	
	
	return 0;	
}
	

