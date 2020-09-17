#include<iostream>
using namespace std;

class box{
	int length,breadth,height;
	public:
		box(int l, int b, int h);
		int sa();
		int vol();
	    box operator ++(); //postfix increment 
        void operator++(int); //prefix increment
        box operator--(); //postfix decrement
        void operator--(int); //prefix decrement
        void operator==(const box& b); 
        void operator=(const box& b);
		void display();
};

box::box(int l=1, int b=1, int h=1){
	length=l;
	breadth=b;
	height=h;
}

box box::operator ++(){
	box b1(length, breadth, height);
	  ++length;
	  ++breadth;
	  ++height;	
	
	return b1;
}

void box::operator++(int){
	++length;
	++breadth;
	++height;
}

box box::operator --(){
	box b1(length, breadth, height);
	  --length;
	  --breadth;
	  --height;	
	
	return b1;
}

void box::operator--(int){
	--length;
	--breadth;
	--height;
}

void box::operator==(const box& b){
	if((length==b.length)&&(breadth==b.breadth)&&(height==b.height)){
		cout<<"box are equal"<<endl;
	}
	else
	cout<<"box are not equal"<<endl;
}

void box::operator=(const box& b){
	length=b.length;
	breadth=b.breadth;
	height=b.height;
}

void box::display(){
	cout<<"Length="<<length<<" "<<"breadth="<<breadth<<" "<<"height="<<height<<endl;
}

/*void box::operator ++(const box &ob1, const box &ob2,const box &ob3){
	length= ob1.length++;
	breadth= ob2.breadth++;
	height = ob3.height++; 
}*/

int box::sa(){
	int res;
	if(length==breadth&&breadth==height&&length==height){
		res= 6*length*length;
		return res;
	}
	else
	return length*breadth+breadth*height+height*length+length*breadth+breadth*height+height*length;
}

int box::vol(){
	int res;
	if(length==breadth&&breadth==height&&length==height){
		return length*length*length;
	}
	else
	return length*breadth*height;
}

int main(){
	//box b;
	int l,br,h;
	cout<<"Enter length, breadth, height (all equal or all different)"<<endl;
	cin>>l>>br>>h;
	
	box b(l,br,h); 
	
	if(l==br&&br==h&&l==h){
		cout<<"The surface area of cube is"<<b.sa()<<endl;
		cout<<"The volume of cube is"<<b.vol()<<endl;
	}
	else{
	cout<<"The Surface area of cuboid is"<<b.sa()<<endl;
	cout<<"The volume of cuboid is"<<b.vol()<<endl;
    }
    
	cout<<"prefix increment"<<endl;
	++b; 
	b.display(); 
	
	cout<<"postfix increment"<<endl;
	box b1=++b; 
	b1.display();
	cout<<"original value"<<endl; 
	b.display(); 
	
	cout<<"prefix decrement"<<endl;
	--b; 
	b.display(); 
	
	cout<<"postfix decrement"<<endl;
	box b4=--b; 
	b4.display();
	cout<<"original value"<<endl; 
	b.display();


	
	cout<<"checking equality of boxes"<<endl;
	cout<<"enter more dimensions"<<endl;
	cin>>l>>br>>h;
	box b2(l,br,h);
	b==b2; 
	
	cout<<"Assignment operator"<<endl;
	cout<<"Enter length, breadth, height you want to assign"<<endl;
	cin>>l>>br>>h; 
	box b3(l,br,h);
	b=b3;
	cout<<"values after updating"<<endl;
	b.display(); 
	
	
	
	return 0;
}
