#include<iostream>
#include<cstring>
#include<fstream>  //This data type represents the file stream generally, and has the capabilities of both ofstream and ifstream which means it can create files, write information to files, and read information from files.
using namespace std;

struct student{
	int roll, clas, year, tmarks;
	char name[20];
};

int main(){
	
	fstream file; 
	file.open("info.txt", ios::out|ios::in|ios::trunc); //open a file for writing, reading, trunc is used so that when file is open it will remove old content
	if (!file){
		cout<<"Error creating in file opening"<<endl;
		return 0;
	}
	cout<<"File created successfully"<<endl;
	
	struct student st[4];
	
	cout<<"Enter the information about student"<<endl;
	for(int i=0; i<4; i++){
		cout<<"Enter name of student "<<i+1<<endl;
		cin>>st[i].name; //read name from standard input
		file<<st[i].name<<endl; //write name in file
	
		cout<<"Enter roll no student "<<i+1<<endl;
		cin>>st[i].roll;
		file<<st[i].roll<<endl;
		
		cout<<"Enter class of student "<<i+1<<endl;
		cin>>st[i].clas;
		file<<st[i].clas<<endl;
		
		cout<<"Enter year of student "<<i+1<<endl;
		cin>>st[i].year; 
		file<<st[i].year<<endl;
		
		cout<<"Enter total marks of student "<<i+1<<endl;
		cin>>st[i].tmarks; 
		file<<st[i].tmarks<<endl;
		
		
	}
	
	file.seekg(0, ios::beg);//point read pointer at beginning of file 
	for(int i=0; i<4; i++){
		file>>st[i].name;          //read st.name from file
		cout<<st[i].name<<endl;    //print st.name on console
		
		file>>st[i].roll;
		cout<<st[i].roll<<endl;
		
		file>>st[i].clas;
		cout<<st[i].clas<<endl;
		
		file>>st[i].year;
		cout<<st[i].year<<endl;
		
		file>>st[i].tmarks;
		cout<<st[i].tmarks<<endl;
	}
	
	file.close();
	return 0;
}


