#include<iostream>
using namespace std;

int main(int argc, char *argv[]){ // argc- argument count, argv- argument value
	string str="";
	static int alpha[26]; 
	int x;
	
	cout<<"You have entered "<<argc-1<<" alphabets"<<endl;
	
	if(argc<2){
			cout<<"Argument list is empty"<<endl;
		}
		
	else{
	
	cout<<"Entered words"<<endl;
	for(int i =0; i<argc; i++){
		cout<<argv[i]; 
		str+=argv[i];
	}
	for(int i = 0 ; i < str.length(); i++){
		
		if(str[i]>='A'&&str[i]<='Z'){
			x=((int)str[i])-65;
			alpha[x]++;
		}
		else if(str[i]>='a'&&str[i]<='z'){
			x=((int)str[i])-97;
			alpha[x]++;
		}
	}
  }
  cout<<endl;
		
			cout<<"Ocurrs of alphabets"<<endl;
			for(int i=0; i<26;i++){
			cout<<(char)(65+i)<<alpha[i]<<" ,";
		
	}

	
	return 0;
}
