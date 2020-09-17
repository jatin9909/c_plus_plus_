#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char content[50],ch; 
	fstream file1, file2;
	int count =0; 

	
	file1.open("fromcopy.txt", ios::out| ios::in| ios::trunc);
	file2.open("tocopy.txt", ios::out| ios::in| ios::trunc);
	
	if(!file1){
		cout<<"Error in opening file 1"<<endl;
	}
	else
	cout<<"File 1 open succesfully"<<endl;


	if(!file1){
		cout<<"Error in opening file 2"<<endl;
	}
	else
	cout<<"File 2 open succesfully"<<endl;
	
	
	cout<<"Enter the content in file 1 with whitespace"<<endl;
	gets(content); 	   
	file1<<content<<endl; 
	
	
	
	
	while(file1.eof()==0){
		file1>>content;
		
		for(int i=0; content[i]; i++){
		if(content[i]!=' ')
		   content[count++]=content[i]; 
	    }
	content[count]='\0'; 
	
		file2<<content;
	}
	
	cout<<"File copied successfully"<<endl;
	file1.close();
	file2.close();
	
	return 0;
}
