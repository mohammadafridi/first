/* #include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a number"<<endl;
	cin>>x;
	int s=x*x;
	cout<<"Square of "<<x<<"is"<<s;
}


#include<iostream>
using namespace std;
int main()
{
	void fun();
	cout<<"You are in main"<<"\n";
	fun();
}
void fun()
{
	cout<<"You are in fun";
}


// call by value(example)
#include<iostream>
using namespace std;
int sum(int, int);
int main()
{
	int a=4,b=9;
	int s=sum(a,b);		// a and b are actual arguments
	cout<<"sum is "<<s;
}
int sum(int x,int y)			// x and y are formsl arguments
{
	return(x+y);
}


// call by address
// When formal arguments are pointer variables, it is function call by address
#include<iostream>
using namespace std;
int sum(int *, int *);
int main()
{
	int a=4,b=9;
	int s=sum(&a,&b);
	cout<<"sum is "<<s;
}
int sum(int *p,int *q)
{
	return(*p+*q);
}


// call by reference
// When formal arguments are reference variables, it is function call by referebce
#include<iostream>
using namespace std;
int sum(int &, int &);
int main()
{
	int a=4,b=9;
	int s=sum(a,b);
	cout<<"sum is "<<s;
}
int sum(int &x,int &y)
{
	return(x+y);
}


#include<iostream>
using namespace std;
inline void fun();
int main()
{
	cout<<"Tou are in main";
	fun();
}
void fun()
{
	cout<<"You are in fun";
}



//Default Arguments
#include<iostream>
#include<conio.h>
using namespace std;
int add(int, int, int=0);
int main()
{
	char  clrscr();
	int a,b;
	cout<<"Enter two numbers"<<"\n";
	cin>>a>>b;
	cout<<"Sum is"<<add(a,b)<<"\n";
	int c;
	cout<<"enter three number"<<"\n";
	cin>>a>>b>>c;
	cout<<"sum is "<<add(a,b,c);
	getch();
}
int add(int x, int y, int z)
{
	return(x+y+z);
}




// Function Overloading
#include<iostream>
using namespace std;
int area(int, int);
float area(int);
int main()
{
	int r;
	cout<<"Enter the radius of a circle";
	cin>>r;
	float A=area(r);
	cout<<"\nArea of a circle is "<<A;
	int l,b,a;
	cout<<"\nEnter the the length and breadth of rectangle";
	cin>>l>>b;
	a=area(l,b);
	cout<<"\nArea of a rectangle is "<<a;
}
float area(int R)
{
	return(3.14*R*R);
}
int area(int L, int B)
{
	return(L*B);
}





// classes in c++(first program on classes)


#include <iostream>
using namespace std;


class Student{
	public:
	int id;
	string name;
	
	
	void put_deatils(int i, string n){
		id = i;
		name = n;
	}
	
	void get_details(){
		cout<<"id "<<id;
		cout<<"\nname "<<name;
	}
};

int main() {
	Student s1;
	int s_id;
	string s_name;
	
	cout<<"Enter id of student ";
	cin>>s_id;
	cout<<"Enter name of student ";
	cin>>s_name;
	s1.put_deatils(s_id,s_name);
	s1.get_details();
}



// using throw, try and catch keywords

#include <iostream>
using namespace std;
float division(int x, int y)
{
	if(y==0){
		throw "Attempted to dvide by zero!";
	}
	return(x/y);
}
int main()
{
	int i = 25;
	int j = 0;
	float k = 0;
	try{
		k=division(i,j);
		cout<<k<<endl;
	}
	catch (const char* e){
		cerr<<e<<endl;
	}
	return 0;
}



#include<iostream>
using namespace std;

int main()
{
	try{
		int age = 21;
		if(age>18)
		{
			cout<<"Access granted-you are old enough";
		}
		else
		{
			throw(age);
		}
	}
	catch(int myNum)
	{
		cout<<"Access denied-you must be at least 18 yeares old\n";
		cout<<"Age is;"<<myNum;
	}
	return 0;
}





// class and object
#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		void set_data(int x, int y)
		{
			a=x;
			b=y;
		}
		void show_data()
		{
			cout<<"\na= "<<a<<"\nb= "<<b;		}
};
int main(){
	complex c1;		// c1 is an object
	c1.set_data(3,4);
	c1.show_data();

}



//how to ADD two complex numbers
#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		void set_data(int x, int y)
		{
			a=x;
			b=y;
		}
		void show_data()
		{
			cout<<"\na= "<<a<<"\nb= "<<b;		
		}
		complex add(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
};
int main(){
	complex c1,c2,c3;		// c1 is an object
	c1.set_data(3,4);
	c2.set_data(5,6);
	c3=c1.add(c2);
	c3.show_data();

}






// simple program on classes

// outside the class definition

#include<iostream>
using namespace std;

class item
{
	int number;
	float cost;
	public:
		void getdata(int a, float b);
		void putdata(void)
		{
			cout<<"number :"<<number<<"\n";
			cout<<"cost :"<<cost<<"\n";
			
		}
};
void item :: getdata(int a, float b)
{
	number = a;
	cost = b;
	
}
int main()
{
	item x;
	cout <<"\nobject x"<<"\n";
	x.getdata(100, 54.4656);
	x.putdata();
	
	item y;
	cout <<"\nobject y"<<"\n";
	y.getdata(500, 583.2555);
	y.putdata();
	return 0;
}




// nesting of member functions

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class binary
{
	string s;
	public:
		void read(void)
		{
			cout<<"Enter a binary number : "<<"\n";
			cin>>s;
		}
		void chk_bin(void)
		{
			for(int i=0; i<s.length(); i++)
			{
				if(s.at(i)!='0' && s.at(i)!='1')
				{
					cout<<"\nIncorrect binary number format.....the program will quit";
					getch();
					exit(0);
				}
			}		
		}
		void ones(void)
		{
			chk_bin();
			for(int i=0; i<s.length(); i++)
			{
				if(s.at(i)=='0'){
					s.at(i)='1';
				}
				else 
					s.at(i)='0';
			}
		}
		void displayones(void)
		{
			ones();
			cout<<"\nThe 1's compliment of the above binary number is:"<<s;
		}
};
int main()
{
	binary b;
	b.read();
	b.displayones();
	return 0;
}




// program on processing shoping list


#include<iostream>

using namespace std;

const m=50;
class ITEMS
{
	int itemCode[m];
	float itemPrice[m];
	int count;
   public:
   	void CNT(void){count = 0;
	}
	void getitem(void);
	void displaySum(void);
	void remove(void);
	void displayItems(void);   
};
//================================
void ITEMS :: getitem(void)
{
	cout << "\nEnter Item code : ";
	cin>>itemCode[count];
	cout <<"\nEnter item cost : ";
	cin >> itemPrice[count];
	count++;
	
}
void ITEMS :: displaySum(void)
{
	float sum = 0;
	for(int i=0; i<count; i++)
		sum = sum + itemPrice[i];
		cout<<"\nTotal value :"<<sum<<"\n";
}
void ITEMS :: remove(void)
{
	int a;
	cout<<"Enter item code : ";
	cin>>a;
	
	for(int i=0; i<count; i++)
		if(itemCode[i]==a)
			itemPrice[i]=0;
}
void ITEMS :: displayItems(void)
{
	cout<<"\nCode Price\n";
	for(int i=o; i<count; i++)
	{
		cout<<"\n"<< itemCode[i];
		cout<<" "<< itemPrice[i];
	}
	cout<<" \n";
}

int main()
{
	ITEAM order;
	Order.CNT();
	int x;
	do
	{
		cout<<"\nYou can do the following;"<<"\nEnter appropriate number \n";
		cout << "\n1 : Add an item";
		cout<< "\n2 : Display total value";
		cout <<"\n3 : Delete an item";
		cout <<"\n4 : Display all items";
		cout <<"\n5 : Quit";
		cout <<"\n\nWhat is your option?";
		cin >> x;
		switch(x)
		{
			case 1 : order.getitem();
				break;
			case 2 : order.displaySum();
			break;
			case 3 : order.remove();
			break;
			case 4 : order.displayItems();
			break;
			case 5 : break;
			default : cout<<"Error in input; try again\n";
			
		}
		
	} while (x != 5);
	return 0;
}






#include <iostream>
using namespace std;

class complex
{
	private:
		int a, b;
	public:
		complex(int x,int y)	// Parametreized constructor
		{
			a=x;
			b=y;
			cout<<a <<"\t"<<b<<"\n";
		}
	complex(int k)
	{
		b=k;
		cout<<a<<"\t" <<b<<"\n";
	} 
	omplex(complex &c)
	{
		a=c.a;
		b=c.b;
		cout<<a<<"\t"<<b;
	}
};
int main()
{
	complex c1(3,8),c2(5);
	complex c3(c1);
	
}


#include <iostream>
using namespace std;

class point
{
	private:
		int x, y;
	public:
		point(int a, int b)
		{
			x=a;
			y=b;
		}
		void dispay()
		{
			cout<<"("<<x<<","<<y<<")\n";
			}	
};
int main()
{
	point p1(1, 1); // invokes parameterized constructor
	point p2(5 , 10);
	cout<<"points p1 = ";
	p1.dispay();
	cout<<" point p2 = ";
	p2.dispay();
	return 0;
}



#include <iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		~complex()
		{
			cout<<"Destructor";
		}
};
void fun()
{
	complex obj;
}
int main()
{
	fun();  
}

// operator Overloading

#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setData(int x, int y)
		{
			a=x;
			b=y;
		}
		void showData()
		{
			cout<<"a = "<<a<<" b = "<<b<<"\n";
		}
		complex operator +(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
};
int main()
{
	complex c1,c2,c3;
	c1.setData(3,8);
	c1.showData();
	c2.setData(5,5);
	c2.showData();
	c3=c1+c2;		//Binary operator
	c3.showData();
}



// overloading of Unary operator
#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setData(int x, int y)
		{
			a=x;
			b=y;
		}
		void showData()
		{
			cout<<"a = "<<a<<" b = "<<b<<"\n";
		}
		complex operator-()
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return(temp);
		}
};
int main()
{
	complex c1,c2;
	c1.setData(3,8);
	c1.showData();
	c2=-c1;			//unary operator
	c2.showData();
}



// Overloading of unary operator using per and post incerment

#include<iostream>
using namespace std;

class integer
{
	private:
		int x;
	public:
		void setData(int a)
		{
			x=a;
		}
		void showData()
		{
			cout<<"x = "<<x<<"\n";
		}
		integer operator++()  // pri increment
		{
			integer i;
			i.x=++x;
			return(i);
		}
		integer operator++(int)	// post increment
		{
			integer i;
			i.x=x++;
			return(i);
		}
		
};
int main()
{
	integer i1,i2;
	i1.setData(3);
	i1.showData();
	i2=i1++;
	i1.showData();
	i2.showData();
}

// Program on friend function

#include<iostream>
using namespace std;

class B;
class A
{
	private:
		int a;
	public:
		void setData(int x)
		{
			a=x;
		}
		friend void fun(A, B);
};
class B
{
	private:
		int b;
	public:
		void setData(int y)
		{
			b=y;
		}
		friend void fun(A,B);
};
void fun(A o1, B o2)
{
	cout<<"a = "<<o1.a+o2.b;
}
int main()
{
	A obj1;
	B obj2;
	obj1.setData(3);
	obj2.setData(5);
	fun(obj1,obj2);
}

// Overloading of unary operator as a friend function

#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setData(int x, int y)
		{
			a=x;
			b=y;
			
		}
		void showData()
		{
			cout<<"\na = "<<a<<" b = "<<b;
		}
		friend complex operator-(complex);
};
complex operator-(complex X)
{
	complex temp;
	temp.a=-X.a;
	temp.b=-X.b;
	return(temp);
}
int main()
{
	complex c1,c2;
	c1.setData(3,8);
	c1.showData();
	c2=-c1;
	c2.showData();
}

//single inheritance : private

#include<iostream>
using namespace std;


class B
{
	private:
		int a;
	public:
		int b;
		void get_ab();
		int get_a(void);
		void show_a(void);
		
};
class D : private B
{
	private:
		int c;
	public:
		void mul(void);
		void display(void);
};
void B :: get_ab(void)
{
	cout<<"Enter values for a and b : ";
	cin>>a>>b;
	
}
int B :: get_a()
{
	return a;
}
void B :: show_a()
{
	cout<<"a = "<<a<<"\n";
}
void D :: mul()
{
	get_ab();
	c=b * get_a();  // a cannot be directly used
}
void D :: display()
{
	show_a();
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n\n";
	
}
int main()
{
	D d;
	d.mul();
	d.display();
	d.mul();
	d.display();
	return 0;
}


//Accessibility
#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	protected:
		void setvalue(int k)
		{
			a=k;
		}
		
};
class B:public A
{
	public:
		void setData(int x)
		{
			setvalue(x);
		}
};
int main()
{
	B obj;
	obj.setData(4);
}

// multilivel inheritance
#include<iostream>
using namespace std;

class student
{
	protected:
		int roll_no;
	public:
		void get_no(int);
		void put_no(void);
};
void student :: get_no(int a)
{
	roll_no=a;
}
void student :: put_no()
{
	cout<<"Roll number = "<<roll_no<<"\n";
}
class test : public student
{
	protected:
		float sub1;
		float sub2;
	public:
		void get_marks(float, float);
		void put_marks();
};
void test :: get_marks(float x,float y)
{
	sub1=x;
	sub2=y;
}
void test :: put_marks()
{
	cout<<"Marks in sub one = "<<sub1<<"\n";
	cout<<"Marks in sub second = "<<sub2<<"\n";
}
class result : public test
{
		float total;
	public:
		void display();
};
void result:: display()
{
	total=sub1+sub2;
	put_no();
	put_marks();
	cout<<"Total marks = "<<total;
}
int main()
{
	result student1;
	student1.get_no(111);
	student1.get_marks(95.1,97.6);
	student1.display();
	return 0;
}

//Multiply inheritance
#include<iostream>
using namespace std;
class M
{
	protected:
		int m;
	public:
		void get_m(int);
};
class N
{
	protected:
		int n;
	public:
		void get_n(int);
};
class P : public M, public N
{
	public:
		void display(void);
};
void M :: get_m(int x)
{
	m=x;
}
void N :: get_n(int y)
{
	n=y;
}
void P :: display(void)
{
	cout<<"m = "<<m;
	cout<<"\nn = "<<n;
	cout<<"\nm*n = "<<m*n;
}
int main()
{
	P obj;
	obj.get_m(20);
	obj.get_n(15);
	obj.display();
	return 0;
}

// constructor in inheritance
#include<iostream>
using namespace std;
class alpha
{
	private:
		int a;
	public:
		alpha(int i)
		{
			a=i;
		}
		void show_a(void)
		{
			cout<<"a = "<<a<<"\n";
			
		}
};
class beta
{
	private :
		float b;
	public:
		beta(float j){
			b=j;
		}
		void show_b(void)
		{
			cout<<"b = "<<b<<"\n";
		}
};
class gamma: public beta,public alpha
{
	private:
		int m,n;
	public:
		gamma(int a, float b,int c,int d):alpha(a),beta(b)
		{
			m=c;
			n=d;
		}
		void show_mn(void)
		{
			cout<<"m = "<<m<<"\n";
			cout<<"n = "<<n<<"\n";
		}
};
int main()
{
	gamma g(5,5.8,90,66);
	g.show_a();
	g.show_b();
	g.show_mn();
	
	return 0;
}

// object pointer
#include<iostream>
using namespace std;
class box
{
	private:
		int l,b,h;
	public:
		void set_dim(int l,int b,int h)
		{
			this->l=l; 
			this->b=b;
			this->h=h;
		}
		void show_dim()
		{
			cout<<"length = "<<l<<" breadth = "<<b<<" hight = "<<h;
		}
};
int main()
{
	box *p,smallbox;
	p=&smallbox;
	p->set_dim(5,8,60);
	p->show_dim();
	return 0;
}

// overriding 
#include<iostream>
using namespace std;
class car
{
	public:
		int x;
	public:
		void shiftGear(int a)
		{
			x=a;
		}
		void showdata()
		{
			cout<<"x= "<<x;
		}
		
};
class sportscar: public car
{
	public:
	void shiftGear(int x)
	{
		cout<<"x= "<<x;
	}
	
};
int main()
{
	sportscar obj;
	obj.shiftGear(65);
	obj.showdata();
	return 0;
}
// virtual function
#include <iostream>
using namespace std;
class base
{
	public:
		virtual void display()
		{
			cout<<"\n Display base ";
		}
		virtual void show()
		{
			cout<<"\nShow base";
		}
};
class derived : public base
{
	public:
		void display()
		{
			cout<<"\ndisplay derived ";
		}
		void show()
		{
			cout<<"\nshow derived";
		}
};
int main()
{
	base B;
	derived D;
	base *bptr;
	cout<<"\nbptr points to base \n";
	bptr = &B;
	bptr ->display();
	bptr ->show();
	
	cout<<"\n\n bptr points to derived\n";
	bptr=&D;
	bptr->display();
	bptr->show();
	return 0;
}


// Runtime polymorphism

#include<iostream>
#include<cstring>

using namespace std;
class media
{
	protected:
		char title[50];
		float price;
	public:
		media(char *s, float a)
		{
			strcpy(title,s);
			price = a;
		}
		virtual void display()  // empty virtual function
		{
		}
};
class book:public media
{
	private:
		int pages;
	public:
		book(char *s, float a, int p):media(s,a)
		{
			pages = p;
		}
		void display();
		
};
class tape :public media
{
	private:
		float time;
	public:
		tape(char *s, float a,float t):media(s,a)
		{
			time = t;
			
		}
		void display();
};
void book :: display()
{
	cout<<"\nTitle : "<<title;
	cout<<"\nPages : "<<pages;
	cout<<"\nPrice : "<<price;
}
void tape :: display()
{
	cout<<"\nTitle : "<<title;
	cout<<"\nplay time : "<<time<<"mins";
	cout<<"\nPrice : "<<price;
}
int main()
{
	char *title=new char[30];
	float price,time;
	int pages;
	//Book details
	cout<<"\nEnter Book Details\n";
	cout<<"Title : ";
	cin>>title;
	cout<<"price : ";
	cin>>price;
	cout<<"Pages : ";
	cin>>pages;
	book book1(title, price, pages);
	
	// tape details
	cout<<"\nENTER THE TAPE DETSILS\n";
	cout<<"\ntitle : ";
	cin>>title;
	cout<<"price : ";
	cin>>price;
	cout<<"Play time (mins) : ";
	cin>>time;
	tape tape1(title, price, time);
	
	media *list[2];
	list[0]=&book1;
	list[1]=&tape1;
	cout<<"MEDIA DETAILS";
	cout<<"\n\n----------book--------\n";
	list[0]->display();
	cout<<"\n-------tape-------\n";
	list[1]->display();
	return 0;
}
*/
// project -> runing a clock
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int h,m,s,a,err;
	err=a=0;
	while(err==0)
	{
		cout<<"enter hour : "<<endl;
		cin>>h;
		cout<<"enter minutes : "<<endl;
		cin>>m;
		cout<<"enter seconds : "<<endl;
		cin>>s;
		if(h<24&&m<60&&s<60)
		err++;
		else
		system("cls");
	}
	while(a==0)
	{
		system("cls");
		cout<<h<<":"<<m<<":"<<s<<endl;
		Sleep(1000);
		s++;
		if(s>59)
		{
			s=0;
			m++;
		}
		if(m>59)
		{
			m=0;
			h++;
		}
		if(h>24)
		{
			h=0;
		}
	}
	return 0;
}
/*

// templates
#include<iostream>
using namespace std;

template <class x>
x big(x a,x b)
{
	if(a>b)
		return(a);
	else
		return(b);
}
int main()
{
	cout<<big(8,2)<<"\n";
	cout<<big(8.6,10.6);
}



// file handling

#include<iostream>
#include<fstream>
int main()
{
	ofstream fout;
	fout.open("myfile.dat");
	fout<<"hello";
	fout.close();
}




#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter the numbers : ";
	cin>>a>>b;
	c=a+b;
	cout<<c;
}

*/
