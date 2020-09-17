#include<iostream>
using namespace std; 

class triangle{
	int height, base; 
	public:
		triangle(){
			height=0;
			base=0;
		}
		
		triangle(int h, int b){
			height=h;
			base=b;
		}
		void display();
		int area(int x,int y);
		double area(double x,double y);
		void operator =(const triangle &ob); 
	//	bool operator ==(const triangle &ob1, const triangle &ob2);
      //  bool operator!=(const triangle &ob1, const triangle &ob2); 	
};

/*bool triangle::operator ==(const triangle &ob1, const triangle &ob2);
{
	return (ob1.height==ob2.height && ob1.base==ob2.base); 
}

bool triangle::operator!=(const triangle &ob1, const triangle &ob2)
{
	return !(ob1==ob2);
}*/

void triangle::operator =(const triangle &ob){
	height = ob.height;
	base = ob.base;
}

void triangle::display(){
	cout<<"Height "<<height<<"Base "<<base<<endl;
}

int triangle::area(int x, int y){
	return 0.5*x*y ;
}

double triangle::area(double x, double y){
	return 0.5*x*y;
}

int main(){
	triangle t;  
	triangle t1(5,6), t2(7,9); 
	cout<<"First base and height"<<endl;
	t1.display();
	
	cout<<"Seconed base and height"<<endl;
	t2.display();
	
	t1=t2; 
	cout<<"First base and height"<<endl;
	t1.display();
	
/*	if(t1==t2){
		cout<<"t1 and t2 are the same"<<endl;
	}
	if(t1!=t2){
		cout<<"t1 and t2 are not the same"<<endl;
	}*/
	
	
	cout<<"Area in integer "<<t.area(5,6)<<endl;
	cout<<"Area in double "<<t.area(5.1, 6.5)<<endl;
	return 0;
	
}
