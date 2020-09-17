#include<iostream>  //str.push_back('a') and str.pop_back('s') also used in strings
#include<string>    // can't use cin in string because it will take only first word before space
                    // that's why we use getline(cin,str); 
using namespace std;

int palin(string n);

int palin(string n){
	int len;
	
	len = n.length();
	
	for(int i=0; i<len; i++){    // converting all caps letter and spaces to small letters
		
		if(n[i]>='A' && n[i]<'Z']){
			n[i]=n[i]+32;
			
		}
		
		if(n[i]>='a' && n[i]<='z'){
			n.push_back(n[i]);
		}
	}
	
	len=n.length();
	
	for(int i =0; i<=(len/2); i++){
		if(n[i]!=n[len-i-1]){
			return 0;
		
		}
	}
	return 1;
}

int main(){
	string str;
	
	cout<<"Enter the string"<<str<<endl;
	getline(cin,str);
	
	std::string::reverse_iterator it;  //declare it as an iteration;
	
	cout<<"The reverse of entered string is"<<endl;
	for(it=str.rbegin() ; it!=str.rend(); it++)
	{
		cout<<*it;
	}
	cout<<endl;
	
	int res = palin(str);
	
	if(res==0){
		cout<<"Enteres string is not palindrom"<<endl;
	}
	else{
		cout<<"Entered string is palindrome"<<endl;
		
	}
	
	return 0;   //also read minimum char to be added to become a palindrome;
}
