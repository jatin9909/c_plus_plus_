#include<iostream>
#include<cstring>

using namespace std;

void add(string , string, int , int );
void con(string, string, int, int);
void constr(string, string, int ,int );
void length(string, string, int , int);
void lenpoint(string, string);
void lower(string, string, int , int);
void upper(string, string, int , int);
void vowel(string, string, int , int);
void rev(string, string, int , int);

void add(string str1, string str2, int n1, int n2){	
	
	cout<<"In first string"<<endl;
	for(int i = 0 ; i < n1 ; i++){
		cout<<str1[i]<<" position is "<<i+1<<endl;
	}

    cout<<"In seconed string"<<endl;
	for(int i = 0 ; i < n2 ; i++){
		cout<<str2[i]<<" position is "<<i+1<<endl;
	}
	
}

void con(string str1, string str2, int n1, int n2){
	string str="";
	str=str1; 
	
	for(int i=0; i<n2; i++){
		str+=str2[i];
	}
	cout<<str[3]<<str[4]<<str[5];
	
	cout<<"Combined string is "<<str<<endl;
}

void constr(string str1, string str2, int n1, int n2){
	char st[n1];   //creating char array equal to the size of str1 and str2 
	char st2[n2];  
	
	strcpy(st, str1.c_str()); //copy the content of string str1 into char array st
	strcpy(st2, str2.c_str());
	
	strcat(st, st2);  //now strcat will work because it works on char array, it's syntax is  char *strcat(char *destination, const char* source) 
	cout<<"Concatenated string "<<st<<endl;
}

void length(string str1, string str2, int n1, int n2){
	if(n1>n2){
		cout<<"String 1 is longer than string 2"<<endl;
		
	}
	else if(n2>n1){
	cout<<"String 2 is longer than strin 1"<<endl;
    }
    else
    cout<<"String 1 and string 2 are equal"<<endl;
}

/*void lenpoint(string *str1, string *str2){
	int string_length(char* given_string) 
{ 
    // variable to store the 
    // length of the string 
    int length = 0; 
    while (*given_string != '\0') { 
        length++; 
        given_string++; 
    } 
  
    return length; 
} 
  
// Driver function 
int main() 
{ 
    // array to store the string 
    char given_string[] = "geeksforgeeks"; 
    cout << string_length(given_string); 
    return 0; 
} 
} */

void lower(string str1, string str2, int n1, int n2){
	string str="";
	
	str=str1; 
	
	for(int i = 0 ; i<n2; i++){
		str+=str2[i];
	}
	
	for(int i = 0 ; i<str.size(); i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]-32; 
		}
	}
	cout<<str<<endl;
}

void upper(string str1, string str2, int n1, int n2){
	string str="";
	
	str=str1; 
	
	for(int i = 0 ; i<n2; i++){
		str+=str2[i];
	}
	
	for(int i = 0 ; i<str.size(); i++){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]+32; 
		}
	}
	cout<<str<<endl;
}

void vowel(string str1, string str2, int n1, int n2){
	string str="";
	int count=0;
	
	str=str1; 
	
	for(int i = 0 ; i<n2; i++){
		str+=str2[i];
	}
	
	for(int i = 0 ; i<str.size(); i++){
	if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'
	||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'
	||str[i]=='o'||str[i]=='u'){
		
	count++; 
	}
	
	}
	cout<<"Total no. of vowels "<<count<<endl; 
}

void rev(string str1, string str2, int n1, int n2){
	string str="";
	str=str1; 
	
	for(int i = 0 ; i<n2; i++){
		str+=str2[i];
	}
	
	for(int i = str.length()-1 ; i>=0; i--){
		cout<<str[i];
	}
	
	cout<<endl;
}


int main(){
	string str1="";
	string str2="";
	int choice, n1, n2; 
	
	cout<<"Enter the string1"<<endl;
	cin>>str1;
	cout<<"Enter the string2"<<endl;
	cin>>str2;
	
	
	n1= str1.size();
	n2 = str2.size();
		
	do{
    cout<<"Enter choice"<<endl
	<<"1. address of each character in string"<<endl
	<<"2. concatenate string without using strcat function"<<endl
	<<"3. concatenate string with using strcat function"<<endl
	<<"4. compare two strings"<<endl
	<<"5. calculate length of the string"<<endl
	<<"6. convert all lowercase to uppercase"<<endl
	<<"7. convert all uppercase to lowercase"<<endl
	<<"8. calculate no. of vowels"<<endl
	<<"9. reverse string"<<endl
	<<"0. exit"<<endl;
	cin>>choice;
	
		switch(choice){
		
		case 1: add(str1, str2, n1, n2);
		        break;
		        
		case 2: con(str1, str2, n1, n2);
		        break;
				
		case 3: constr(str1, str2, n1, n2);
		        break;
				
		case 4: length(str1, str2, n1, n2);
		        break;
		        
		//case 5: lenpoint(str1, str2);
		  //      break;        
				
		case 6: lower(str1, str2, n1, n2);
		        break;
				
		case 7: upper(str1, str2, n1, n2);
		        break;
				
		case 8: vowel(str1, str2, n1, n2);
		        break;
				
		case 9: rev(str1, str2, n1, n2);
		        break; 
				
	    default : cout<<"Enter any number between 1 to 8";
				break; 													        
	}
	
}while(choice!=0);

return 0;
	
}
