#include<iostream>
#include<cstdio>

using namespace std;

class person
{
   	int age; 
   	char name[20];
   	
   	public:
   		virtual void enter();
   		virtual void display(); 
};

void person::enter(){
	cout<<"This is person class"<<endl; 
	cout<<"Enter name"<<endl; 
	gets(name);
	cout<<"Enter age"<<endl;
	cin>>age; 
}

void person::display(){
	cout<<"This is person class"<<endl;
	cout<<"Name"<<name<<endl;
	cout<<"Age"<<age<<endl; 
}

class teacher:public person{
	char department[20];
	
	public:
		virtual void enter();
		virtual void display();
};

void teacher::enter(){
	cout<<"Teacher class"<<endl;
	cout<<"Enter department"<<endl;
	cin>>department;
}

void teacher::display(){
	cout<<"Teacher class"<<endl;
	cout<<"Department"<<endl;
	cout<<department; 
}

class student:public person{
	char course[20];
	
	public:
		virtual void enter();
		virtual void display();
};

void student::enter(){
	cout<<"Student class"<<endl;
	cout<<"Enter course"<<endl;
	cin>>course;
}

void student::display(){
	cout<<"Student class"<<endl;
	cout<<"course"<<endl;
	cout<<course<<endl;
}

int main(){
	int n;
	person *p=new person(); 
	teacher t;
	student s;
	
	p->enter();
	p->display();
	
	cout<<"press 1 for student and 2 for teacher"<<endl;
	cin>>n;
	
	if(n==1){
		p=&s;
		p->enter();
		p->display();
	}
	else{
		p=&t;
		p->enter();
		p->display();
	}
	
	delete p;
	
	return 0;
}
