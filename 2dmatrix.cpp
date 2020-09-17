#include<iostream>    //A template is a simple and yet very powerful tool in C++
using namespace std;  //The simple idea is to pass data type as a parameter so that 
                      //we don’t need to write the same code for different data types.
                      //Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter.
                      //For example, a software company may need sort() for different data types
	                  //matix is array of array

int sum=0, diff=0, prod=1 ; 

class matrix{
	
	public:
		int sum(int **mat1, int **mat2 ,int **res, int n); 
		int diff(int **mat1, int **mat2,int **res, int n); 
		int pro(int **mat1, int **mat2,int **res, int n); 
		int trans(int **mat1,int  **mat2,int **res, int n); 
};

int matrix::sum(int **mat1, int **mat2, int **res, int n){
	
	
	for(int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			res[i][j]= mat1[i][j]+mat2[i][j]; 
		}
	}
	cout<<"The sum of matrix is "<<endl; 
	for(int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			  cout<< res[i][j]<<" "; 
		}
		cout<<endl; 
	} 
	return 0; 
}

int matrix::diff(int **mat1, int **mat2, int **res, int n){
	
	
	for(int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			res[i][j]= mat1[i][j]-mat2[i][j]; 
		}
	}
	cout<<"The difference of matrix is "<<endl; 
	for(int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			  cout<< res[i][j]<<" "; 
		}
		cout<<endl; 
	} 
	return 0; 
}

int matrix::pro(int **mat1, int **mat2, int **res, int n){
	
	
	for(int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			res[i][j]= mat1[i][j]*mat2[i][j]; 
		}
	}
	cout<<"The Product of matrix is "<<endl; 
	for(int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			  cout<< res[i][j]<<" "; 
		}
		cout<<endl; 
	} 
	return 0; 
}

int matrix::trans(int **mat1, int **mat2, int **res, int n){
	
	
	for(int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			cout<<mat1[j][i]<<" ";  
		}
		cout<<endl; 
	}
     
    for(int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			cout<<mat2[j][i]<<" ";  
		}
		cout<<endl; 
	}  

	return 0; 
}


int main(){
	int n, choice;    
	matrix m1;           
				    
	cout<<"Enter the number of rows and columns you want in matrix"<<endl;
	cin>>n ; 
	
	
	int *ptr = new int[n]; //allocate space of vectors
	int *ptr1 = new int[n]; 
	
	int **mat1 = new int* [n];  //allocate space for matrix
	for(int i = 0; i<n; i++){
		mat1[i]= new int[n]; 
	}
	
	cout<<"Enter the elements in matrix 1"<<endl;
	for(int i = 0 ; i<n ; i++){
		for(int j = 0; j<n ; j++){
			cin>>mat1[i][j]; 
		}
	} 

	for(int i = 0 ; i<n ; i++){
		for(int j = 0; j<n ; j++){
			cout<<mat1[i][j]<<" "; 
		}
		cout<<endl; 
	}
	
	int **mat2 = new int* [n];  //allocate space for matrix
	for(int i = 0; i<n; i++){
		mat2[i]= new int[n]; 
	}
	
	cout<<"Enter the elements in matrix 2"<<endl;
	for(int i = 0 ; i<n ; i++){
		for(int j = 0; j<n ; j++){
			cin>>mat2[i][j]; 
		}
	} 

	for(int i = 0 ; i<n ; i++){
		for(int j = 0; j<n ; j++){
			cout<<mat2[i][j]<<" "; 
		}
		cout<<endl; 
	}
	
	int **res=new int*[n]; 
	for(int i = 0; i<n; i++){
		res[i]= new int[n]; 
	}
	
	do{
		
	  cout<<"Enter the operations you want to perform| press 0 to exit"<<endl; 
	  cout<<"1. sum of matrix"<<endl
	      <<"2. difference of matrix"<<endl
		  <<"3. Produxt of matrix"<<endl 
		  <<"4. Transpose of matrix"<<endl; 
	  cin>>choice; 	  	
		  	
	  switch(choice){
	   case 1: m1.sum(mat1, mat2, res, n); 
	           break; 
	           
	   case 2: m1.diff(mat1, mat2, res, n); 
	           break; 
			   
	   case 3: m1.pro(mat1, mat2, res ,n); 
	           break; 
			   
	   case 4: m1.trans(mat1, mat2,res, n); 
		       break ;  
			   
	   default : cout<<"Enter number between 1 to 4"<<endl; 
	           break; 
			   		      		         
	  }	
	}while(choice!=0); 
	
	
	return 0;
	 
}                      

