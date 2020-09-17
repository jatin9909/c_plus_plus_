#include <iostream>
using namespace std;

int sumofdigit(int a);
int productofdigit(int a);


int countdigit(int a){
	int count=0;
	while(a!=0){
		a=a/10;
		++count;
	}
	return count;
}

int sumofdigit(int a){
	int sum=0;
	while(a!=0){
			
			sum=sum+a%10;
			a=a/10;
			}
			return sum;
}

int productofdigit(int a){
	int prod = 1;
	
	while(a!=0){
		prod=prod*a%10;
		a=a/10;
	}
	return prod;

}



int main()
{
	int a,ch,size,product,Sum=0;
	
	cout<<"enter the number"<<endl;
	cin>>a;
	
	size=countdigit(a);
	
	cout<<"Length of number->"<<size<<endl;
	
	cout<<"Enter your choice Sum-1, Product-2 both-3"<<endl;
	cin>>ch;
	
	
	switch(ch){
		case 1:
		       cout<<"The sum of number is->"<<sumofdigit(a)<<endl;
			   break;
			   
		case 2:
		       cout<<"The product of number is->"<<productofdigit(a)<<endl;
			   break;	
			   
		case 3:
		       cout<<"The sum of number is->"<<sumofdigit(a)<<"The product of digit->"<<productofdigit(a)<<endl;
			   break;	      
		}
		
	

	return 0;
}
