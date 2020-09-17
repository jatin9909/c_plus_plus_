#include <iostream>  // O(n+m) when merging two unsorted array 
#include <algorithm> // O(nlogn + mlogm + (n+m)) when merging two sorted array into a sorted array

using namespace std;

void merge(int, int, int, int, int); 

void merge(int *ptr, int *ptr1, int n, int n1, int *ptr2 ){
	
	 
	int i = 0 ,j = 0 ,k = 0 ;
	
	while(i<n && j<n1){
		
		if(ptr[i]<ptr1[j])
		  ptr2[k++] = ptr[i++]; 
		  
		else
		  ptr2[k++] = ptr1[j++];  
	}
	
	while(i<n)
	   ptr2[k++]=ptr[i++];
	   
	while(j<n1)
	   ptr2[k++]=ptr1[j++];   
     
    sort(ptr2, ptr2+n+n1);   //sort(starting address, ending address)
} 

int main(){
	int n, n1;
	
	cout<<"Enter the numbers you want to enter in array1"<<endl;
	cin>>n;
	
	cout<<"Enter the numbers you want to enter in array2"<<endl;
    cin>> n1;
    
	int *ptr = new int[n];
	int *ptr1= new int[n1];
	int *ptr2= new int[n+n1];
	
	cout<<"Enter the numbers in array1"<<endl;
	for(int i = 0 ; i < n; i++){
		cin>>ptr[i];
		
	}
	
	cout<<"Enter the numbers in array2"<<endl;
	for(int i = 0 ; i < n1; i++){
		cin>>ptr1[i];
		
	}
	
	merge(ptr, ptr1, n, n1, ptr2); 
	
	cout<<"Merged array is-"<<endl;
    for(int i = 0 ; i<n+n1; i++)
	    cout<<ptr2[i]<<" "; 
	    
return 0;	    
}
