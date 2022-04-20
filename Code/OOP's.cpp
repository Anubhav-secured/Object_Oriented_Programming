/****************************************Contibution By: ANUBHAV SINGH ********************************************/
Program 1
#include <bits/stdc++.h>
using namespace std;
class hero
{
public:
    char *name;
    int health;
    char level;
    static int timeToComplete;
    // simple contructor 
    hero()
    {
        cout<<"simple constructor invoked "<<endl;
        name=new char[100];
    }
    // parameterised constructor 
    hero(int health,char level)
    {
        cout<<"constructor invoked "<<endl;
        cout<<"value of this->: "<<this<<endl;
        this->health=health;
        this->level=level;
    }
    // copy onstructor
    hero(hero& h)
    {
        cout<<"copy constructor invoked "<<endl;
        // deep copy 
        char*ch=new char(strlen(h.name)+1);
        strcpy(ch,h.name);
        this->name=ch;
        this->health=h.health;
        this->level=h.level;
    }
    void print()
    {
        cout << "name: " << this->name<<endl ;
        cout << "level: " << this->level <<endl;
        cout << "health: " << this->health <<endl;
    }
    static int random(){
        return timeToComplete;
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int x)
    {
        health = x;
    }
    void setlevel(char x)
    {
        level = x;
    }
    void setname(char name[])
    {
        strcpy(this->name,name);
    }
    ~hero()
    {
        cout<<"destructor invoked "<<endl;
    }
};
int hero::timeToComplete=5;
int main()
{
    // accesing the static member 
    cout<<hero::timeToComplete<<endl;
    // accessing the static function
    cout<<hero::random()<<endl;


    static
    hero h1;
    dynamically
    hero*h2=new hero;
    delete h2;


    // copy assignment operator 
    char name1[7]= "Babbar";
    hero h1;
    h1.setname(name1);
    h1.setlevel('D');
    h1.sethealth(80);
    h1.print();
    hero h2;
    char name2[7]= "Gabbar";
    h2.setname(name2);
    h2.setlevel('E');
    h2.sethealth(70);
    h2.print();
    h1=h2;
    h1.print();
    h2.print();

    char name[7]= "Babbar";
    hero h1;
    h1.setname(name);
    h1.setlevel('D');
    h1.sethealth(80);
    h1.print();
    // using default copy constructor 
    // hero h2=ramesh; 
    hero h2(h1);
    h2.print();
    h1.name[0]='G';
    h1.print();
    h2.print();

    cout<<"Adress of ramesh: "<<&ramesh<<endl;
    cout<<ramesh.gethealth()<<endl;
    cout<<ramesh.getlevel()<<endl;
    hero suresh(ramesh);
    cout<<suresh.gethealth()<<endl;
    cout<<suresh.getlevel()<<endl;

    hero*h=new hero;
    // or
    hero*h2=new hero();


    static
    hero a;
    cout<<"level of a: "<<a.getlevel()<<endl;
    cout<<"health of a : "<<a.gethealth()<<endl;
    // dynamic allocation
    hero* b=new hero;
    cout<<"level of B: "<<b->getlevel()<<endl;
    cout<<"health of B: "<<b->gethealth()<<endl;

    hero singh;
    cout<<sizeof(h)<<endl;
    singh.sethealth(90);
    singh.setlevel('A');
    cout<<"health is: "<<singh.health<<endl;
    cout<<"Level is: "<<singh.level<<endl;
    return (0);
}

PROGRAM 2 
#include<bits/stdc++.h>
using namespace std;
class sample{
    int p;
    public: 
    sample()
    {
        cout<<"Constructing "<<endl;
    }
    sample(int x)
    {
        p=x;
        cout<<p<<endl;
    }
    ~sample()
    {
        cout<<"Destructing "<<endl;
    }

};
int main()
{
    sample ob;
    sample ob2(9);
    return(0);
}

Program 3

C++ Program to create a simple class and object

#include<bits/stdc++.h>
using namespace std;
class simple{
    public:
    int a,b;
    string name;
    void setdata(int A,int B,string s)
    {
        a=A;
        b=B;
        name=s;
    }
    void getdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<a<<endl;
        cout<<"Marks: "<<b<<endl;
    }
};
int main()
{
    simple obj;
    obj.setdata(5,95,"Anubhav");
    obj.getdata();
    return(0);
}

Program 4

Class implementation

#include<bits/stdc++.h>
using namespace std;
class employee{
    int id_no;
    int salary;
    string name;
    public:
    void setdata(string s,int a,int b){
        id_no=a;
        salary=b;
        name=s;
    }
    void getdata()
    {
        cout<<"Name of Employee: "<<name<<endl;
        cout<<"Id_no of Employee: "<<id_no<<endl;
        cout<<"Salary of Employee: "<<salary<<endl;
    }
};
int main()
{
    employee e1;
    e1.setdata("Rahul",1,2000000);
    e1.getdata();
    return(0);
}

Program 5

#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    string name;
    int roll_no;
    char section;
    public:
    void setdata(string s,int a,char b)
    {
        name =s;
        roll_no=a;
        section=b;
    }
    void getdata()
    {
        cout<<"Name of Student: "<<name<<endl;
        cout<<"Roll no. of Student: "<<roll_no<<endl;
        cout<<"Section of Student: "<<section<<endl;
    }
};

int main()
{
    student s;
    s.setdata("Akash",20,'F');
    s.getdata();
    return(0);
}

Program 6

Three parts of a phome number 
#include<bits/stdc++.h>
using namespace std;

struct Phone_Number{
    int area_code;
    int exchange;
    int number;
};
    
int main()
{
    Phone_Number p;
    cout<<"Enter the area code: ";
    cin>>p.area_code;
    cout<<"Enter the exchange: ";
    cin>>p.exchange;
    cout<<"Enter the Number: ";
    cin>>p.number;
    cout<<"Your Number is: ("<<p.area_code<<")"<<p.exchange<<p.number<<endl;
    return(0);
} 

// Program 7

#include<bits/stdc++.h>
using namespace std;
class student {
    int roll_no;
    string name;
    char section;
    public:
    void setdata()
    {
        cout<<"Enter name of student: ";
        cin>>name;
        cout<<"Enter roll_no of Student: ";
        cin>>roll_no;
        cout<<"Enter section of Student: ";
        cin>>section;
    }
    void getdata()
    {
        cout<<"Name of Student: "<<name<<endl;
        cout<<"Roll no. of Student: "<<roll_no<<endl;
        cout<<"Section of Student: "<<section<<endl;
    }
};
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout<<"Enter the Number of Students: ";
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of Student "<<i+1<<": "<<endl;
        s[i].setdata();
    }
    cout<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<"DEtails of student "<<i+1<<": "<<endl;
        s[i].getdata();
    }
    return(0);
}

// Program 8

#include<bits/stdc++.h>
using namespace std;
class rectangle{
    float length,breadth;
    public:
    void setdata()
    {
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    void FindArea()
    {
        cout<<length*breadth;
    }
};
int main()
{
    rectangle r[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the detail of rectangle "<<i+1<<": "<<endl;
        r[i].setdata();
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"Area of rectangle "<<i+1<<": ";
        r[i].FindArea();
        cout<<endl;
    }
    return(0);
}

// Program 9

C++ Program to count the number of stars in a line using c++;
#include<bits/stdc++.h>
using namespace std;
class star{
    string s;
    public:
    star(string x)
    {
        s=x;
    }
    ~star()
    {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            count++;
        }
        cout<<"No of stars: "<<count<<endl;
    }
};
int main()
{
    star s("ab**d");
    return(0);
} 


#include<bits/stdc++.h>
using namespace std;
class distance{
    private:
    int meter;
    friend int add(distance);
    public: distance():meter(0){

    }
};
int add(distance d)
{
    d.meter+=5;
}
int main()
{
    distance d;
    cout<<"Distance: "<<add(d);
    return(0);
}

#include<bits/stdc++.h>
using namespace std;
class classB;
class classA{
    int numA;
    public:
    // initializing the numA with 12
    classA():numA(12){}
    friend int add(classA,classB);
};
class classB
{
    private:
    int numB;
    public:
    // initializing the numA with 1
    classB():numB(1){}
    friend int add(classA,classB);
};
int add(classA objectA,classB objectB)
{
    return objectA.numA+objectB.numB;
}
int main()
{
    classA objectA;
    classB ObjectB;
    cout<<"Sum: "<<add(objectA,ObjectB)<<endl;
    return(0);
}

// Program 10

#include<iostream>
using namespace std;
class sample2;
class sample{
    int a,b,c;
    public:
    sample(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    float average()
    {
        return(a+b+c)/3.0;
    }
    float average(sample2);
};

class sample2{
    int p,q,r;
    public:
    sample2(int x,int y,int z)
    {
        p=x;
        q=y;
        r=z;
    }
    friend float sample::average(sample2);
};
float sample::average(sample2 o2)
{
    return(o2.p+o2.q+o2.r)/3.0;
}
int main()
{
    sample student1(5,6,8);
    sample2 student2(1,2,3);
    if(student1.average()>student1.average(student2))
    {
        cout<<"Student 1 is first"<<endl;
    }
    else{
        cout<<"Student 2 is first"<<endl;
    }
    return(0);
}

Program 11
 Concept of Constructor 
Q1): Using constructor create a class mark which contains the marks of five subjects and student details
#include<bits/stdc++.h>
using namespace std;
class Mark{
    string name;
    int roll_no;
    char section;
    int marks[5];
    public:
    Mark()
    {
        cout<<"Enter Student Name: ";
        getline(cin,name);
        cout<<"Enter Student roll_no: ";
        cin>>roll_no;
        cout<<"Enter Student section: ";
        cin>>section;
        for(int i=0;i<5;i++)
        {
            cout<<"Enter the marks of subject "<<i+1<<": "; 
            cin>>marks[i]; 
        }
        cout<<endl;
    }
    ~Mark()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll_No: "<<roll_no<<endl;
        cout<<"Section: "<<section<<endl;
        cout<<"Maks in 5 Subjects: "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"subject "<<i+1<<": "<<marks[i]<<endl;
        }
    }
};
int main()
{
    Mark m;
    return(0);
}
Program 12
Calculate the area of Rectangle/Circle and display it
#include<bits/stdc++.h>
using namespace std;
class Area{
    public:
    Area(float l,float b)   
    {

        cout<<"Area of Rectangle: "<< l*b<<endl;
    }
    Area(float r)
    {
        cout<<"Area of Circle: "<< (3.14*r*r)<<endl;
    }
};
int main()
{
    Area A(5,10);
    Area A1(1);
    return(0);
}

Program 13
Using copy constructors find the value of three objects 
#include<bits/stdc++.h>
using namespace std;
class Employee{
    int id;
    float salary;
    public:
    Employee(){}
    Employee(int _id,float _salary)
    {
        id=_id;
        salary=_salary;
    }
    Employee(Employee &E)
    {
        id=E.id;
        salary=E.salary;
    }
    void display()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
int main()
{
    Employee E1(15,1820);
    E1.display();
    Employee E2(E1);
    E2.display();
    Employee E3(E2);
    E3.display();
    return(0);
}

Program 14

Createa class which keep track of numbers of its instances. Use static data member,constructors and destructors to maintain information about active objects.)
#include<bits/stdc++.h>
using namespace std;
class Sample{
    int objNum;
    static int objcount;
    public:
    Sample()
    {
        objNum=++objcount;
    }

    ~Sample()
    {
        --objcount;
    }
    void PrintObjectNumber()
    {
        cout<<"Object Number: "<<objNum<<endl;
    }
    static void PrintObjectCount()
    {
        cout<<"Count: "<<objcount<<endl;
    }
};
int Sample::objcount;
int main()
{
    Sample s1,s2;
    Sample::PrintObjectCount();
    Sample s3;
    Sample::PrintObjectCount();
    s2.PrintObjectNumber();
    s3.PrintObjectNumber();
    return(0);
}

Program 15
Q1: Addition of member of two different classes 
#include<bits/stdc++.h>
using namespace std;
class A;
class B;
class A{
    int x;
    public:
    A(int x1){x=x1;}
    friend int add(A,B);
};
class B{
    int y;
    public:
    B(int y1){y=y1;}
    friend int add(A,B);
};
int add(A o1,B o2)
{
    return (o1.x+o2.y);
}
int main()
{
    A a(5);
    B b(15);
    cout<<"Sum of members of A and B is: "<<add(a,b)<<endl;
    return(0);
}

Q2: program to swap two member using friend function
#include<bits/stdc++.h>
using namespace std;
class sample{
    int a,b;
    public:
    sample(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    friend void swap(sample&);
};
void swap(sample &s)
{
    cout<<"Before swap"<<endl<<"a="<<s.a<<", "<<"b="<<s.b<<endl;

    int temp=s.a;
    s.a=s.b;
    s.b=temp;
    cout<<"After swap"<<endl<<"a="<<s.a<<", "<<"b="<<s.b<<endl;
}
int main()
{
    sample s(2,3);
    swap(s);
    return(0);
}

Program 16

program to print width of a box using friend function
#include<bits/stdc++.h>
using namespace std;
class Box
{
    int width;
    public:
    void setwidth(int w)
    {
        width=w;
    }
    friend void displaywidth(Box b);
};
void displaywidth(Box b)
{
    cout<<"Width of the box is: "<<b.width<<endl;
}
int main()
{
    Box b;
    b.setwidth(15);
    displaywidth(b);
    return(0);
}

Program 17

write a program to find the greatest of two given numbers in two different class using friend function
#include<bits/stdc++.h>
using namespace std;
class X;
class Y;
class X
{
    int a,b;
    public:
    X(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void Maximum(X,Y);
};
class Y
{
    int a,b;
    public:
    Y(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void Maximum(X,Y);
};
void Maximum(X o1,Y o2)
{
    if(o1.a>o1.b)
    cout<<"Maximum in class X: "<<o1.a<<endl;
    else 
    cout<<"Maximum in class X: "<<o1.b<<endl;
    if(o2.a>o2.b)
    cout<<"Maximum in class Y: "<<o2.a<<endl;
    else 
    cout<<"Maximum in class X: "<<o2.b<<endl;
}
int main()
{
    X x1(5,6);
    Y y1(10,15);
    Maximum(x1,y1);
    return(0);
} 
Program 18

  Program to find the biggest of three numbers using the friend function.
#include<bits/stdc++.h>
using namespace std;
class A{
    int a,b,c;
    public:
    A(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    friend void Maximum(A);
};
void Maximum(A o1)
{
    if(o1.a>o1.b&&o1.a>o1.c)
    {
        cout<<"Maximum no: "<<o1.a<<endl;
    }
    else if(o1.b>o1.c)
    {
        cout<<"Maximum no: "<<o1.b<<endl;
    }
    else {
        cout<<"Maximum no: "<<o1.c<<endl;
    }
}
int main()
{
    A a(5,6,7);
    Maximum(a);
    return(0);
}

Program 18

 Program to add two complex numbers using the friend function.
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(){ }
    Complex(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    friend Complex add(Complex,Complex);
};
Complex add(Complex c1,Complex c2)
{
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}
int main()
{
    Complex c1(2,3),c2(5,6);
    Complex c3=add(c1,c2);
    cout<<"Sum is: ";
    c3.display();
    return(0);
}

Program 19
Inheritance 
The capability of class to derive properties and characterstics from another class is called inheritance.

#include<iostream>
using namespace std;
class shape{
    public:
    double length,breadth;
};
class rectangle:public shape
{
    public:
    rectangle(double l,double b)
    {
        length=l;
        breadth=b;
    }
    void FindArea()
    {
        cout<<"Area of Rectangle : "<<(length*breadth)<<endl;
    }
};
int main()
{
    double l,b;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter Breadth: ";
    cin>>b;
    rectangle r(l,b);
    r.FindArea();
    return(0);
}

Program 20

Multiple inheritance 
#include<iostream>
using namespace std;
class base1{
    public:
    double length;
};
class base2{
    public:
    double breadth; 
};
class rectangle:public base1,public base2
{
    public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void FindArea()
    {
        cout<<"Area of Rectangle : "<<(length*breadth)<<endl;
    }
};
int main()
{
    double l,b;
    cout<<"Enter Length of Rectangle: ";
    cin>>l;
    cout<<"Enter Breadth of Rectangle: ";
    cin>>b;
    rectangle r(l,b);
    r.FindArea();
    return(0);
}

Program 21

#include<iostream>
using namespace std;
class base1{
    public:
    double length;
};
class base2: public base1
{
    public:
    double breadth; 
};
class rectangle:public base2
{
    public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void FindArea()
    {
        cout<<"Area of Rectangle : "<<(length*breadth)<<endl;
    }
};
int main()
{
    double l,b;
    cout<<"Enter Length of Rectangle: ";
    cin>>l;
    cout<<"Enter Breadth of Rectangle: ";
    cin>>b;
    rectangle r(l,b);
    r.FindArea();
    return(0);
}

Program 22

#include<iostream>
using namespace std;
class first{
    public:
    string book_name;
    int book_no;
    void setdata1()
    {
        cout<<"Enter Book name: ";
        cin>>book_name;
        cout<<"Enter Book no: ";
        cin>>book_no;
    }
    void showdata1()
    {
        cout<<"Book Name: "<<book_name<<endl<<"Book No: "<<book_no<<endl;
    }
};
class second{
    public: 
    string author_name,publisher_name;
    void setdata2()
    {
        cout<<"Enter Author name: ";
        cin>>author_name;
        cout<<"Enter publisher name: ";
        cin>>publisher_name;
    }
    void showdata2()
    {
        cout<<"Author name: "<<author_name<<endl<<"Publisher name: "<<publisher_name<<endl;
    }
};
class third:public first,public second
{
    public:
    int no_of_pages,yr_of_publication;
    void setdata3()
    {
        cout<<"Enter no of Pages: ";
        cin>>no_of_pages;
        cout<<"Enter year of publication: ";
        cin>>yr_of_publication;
    }
    void showdata3()
    {
        cout<<"No_of_pages: "<<no_of_pages<<endl;
        cout<<"Year_of_publication : "<<yr_of_publication<<endl;
    }
};
int main()
{
    third abc[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the details of book: "<<i+1<<endl;
        abc[i].setdata1();
        abc[i].setdata2();
        abc[i].setdata3();
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"Details are: "<<endl;
        abc[i].showdata1();
        abc[i].showdata2();
        abc[i].showdata3();
    }
    return(0);
}

Program 23

#include<bits/stdc++.h>
#include<string>
using namespace std;
class Solution{
    string str;
    int vcnt=0,unchr=0;
    int letter[26]={0};
    public:
    Solution(string s)
    {
        str=s;
        for(int i=0;i<s.size();i++)
        {
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            vcnt++;
        }
        
    }
    int vowelcount()
    {
        return vcnt;
    }
    void DisplayVowel()
    {
        cout<<"vowels in string : ";
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            cout<<str[i]<<" ";
        }
        cout<<endl;
    }
    void UniqueChar()
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
        for(int i=0;i<str.size();i++)
        {
            letter[str[i]-'a']++;
        }
        cout<<"Unique character in string : ";
        for(int i=0;i<26;i++)
        {
            if(letter[i])
            {
                unchr++;
                cout<<(char)('a'+i)<<" ";
            }
        }
        cout<<endl;
    }
    int UniqueCharcount()
    {
        return unchr;
    }
    double ratio()
    {
        return (double)unchr/(double)str.size();
    }
};
int main()
{
    string a="abbcdeA";
    Solution s(a);
    cout<<"Vowel Count in string : "<<s.vowelcount()<<endl;
    s.DisplayVowel();
    s.UniqueChar();
    cout<<"Unique character count is: "<<s.UniqueCharcount()<<endl;
    cout<<"Ratio of No of unique character to length of string is: "<<s.ratio()<<endl;
    return(0);
}

Program 24

#include<bits/stdc++.h>
using namespace std;
class Complex{
    float real,img;
    public:
    Complex()
    {
    real=0;
    img=0;
    }
    Complex(float r,float i)
    {
    real=r;
    img=i;
    }
    void show()
    {
        cout<<real<<" + "<<img<<" i "<<endl;
    }
    Complex operator+(Complex &p)
    {
    Complex w;
    w.real=real+p.real;
    w.img=img+p.img;
    return w;
    }
};
int main()
{
    Complex c(1,2),d(5,6);
    Complex ans=c+d;
    ans.show();
    return(0);
}
Program 25

#include<bits/stdc++.h>
using namespace std;
class SHAPE{
    public:
    double a,b;
    void getdata()
    {
        cin>>a>>b;
    }
    virtual void display(){ }
};
class TRIANGLE: public SHAPE
{
    public:

    void display()
    {
        cout<<"Area of Triangle: "<<(0.5)*a*b<<endl;
    }
};
class RECTANGLE: public SHAPE
{
    public:
    
    void display()
    {
        cout<<"Area of rectangle: "<<a*b<<endl;
    }
};
int main()
{
    cout<<"Enter base and height of triangle: ";   
    TRIANGLE t;
    SHAPE *s=&t;
    s->getdata();
    s->display();
    cout<<"Enter length and breadth of rectangle: ";   
    RECTANGLE r;
    SHAPE *sr=&r;
    sr->getdata();
    sr->display();
    return(0);
}

Program 26
#include <iostream>
using namespace std;
 
class base
{
    private:
        int a;
    public:
        void setdata(int x)
        {
            a=x;   
        }
        int getdata()
        {
            return a;
        }
};
 
class derived : private base
{
    public:
        derived(int x)
        {
            setdata(x);
        }
        void printdata()
        {
            cout<<"Value of a is: "<<getdata()<<endl;
        }
};
 
int main()
{
    int a;
    cout<<"Enter a: ";
    cin>>a;
    derived obj(a);
    obj.printdata();
    return 0;
}
Program 27

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name ;
        int roll_no;
        void setinfo()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter roll no: ";
            cin>>roll_no;
        }
};
class result:public student{
    int marks;
    float percentage;
    public:
        void set_resultdata()
        {
            cout << "Enter Total Marks: ";
            cin >> marks;
            percentage= (marks*100)/500.0;
        }
        void print_result()
        {
            cout<<"Student name: "<<name<<endl<<"Student roll_no: "<<roll_no<<endl
            <<"Student Total Marks : "<<marks<<endl<<"Student Percentage : "<<percentage<<endl;
        }
};
int main()
{
    result s1;
    s1.setinfo();
    s1.set_resultdata();
    s1.print_result();
    return(0);
}

Program 28

#include<bits/stdc++.h>
using namespace std;
class base1{
    public:
    string name;
    int id;
        void set_BasicInfo()
        {
            cout<<"Enter Employee Name: ";
            cin>>name;
            cout<<"Enter id: ";
            cin>>id;
        }
};
class base2{
    public:
        string industry;float salary;
        void set_IndustryInfo()
        {
            cout<<"Enter industry: ";
            cin>>industry;
            cout<<"Enter salary: ";
            cin>>salary;
        }
};
class Employee: public base1,public base2{
    public:
       void printdetail() 
       {
           cout<<"Emplyee Name: "<<name<<endl<<"Emplyee Id: "<<id<<endl<<
           "Emplyee Industry: "<<industry<<endl<<"Emplyee Salary: "<<salary<<endl;
       }
};
int main()
{
    Employee e1;
    e1.set_BasicInfo();
    e1.set_IndustryInfo();
    e1.printdetail();
    return(0);
}

Program 29

#include<bits/stdc++.h>
using namespace std;
class Number{
    public:
    int n;
        void setNumber()
        {
            cout<<"Enter No: ";
            cin>>n;
        }
        int getno()
        {
            return n;
        }
};
class square:  public Number{
    public:
        int getsquare()
        {
            return n*n;
        }
};
class cube:  public Number{
    public:
       int getcube()
        {
            return n*n*n;
        } 
};
int main()
{
    square objsq;
    cube objcb;
    objsq.setNumber();
    objcb.setNumber();
    cout<<"Square of "<<objsq.getno()<<" : "<<objsq.getsquare()<<endl;
    cout<<"cube of "<<objcb.getno()<<" : "<<objcb.getcube()<<endl;
    return(0);
}

Program 30

#include<bits/stdc++.h>
using namespace std;
void add(int a,int b)
{
    cout<< "sum of two integer: "<<a+b<<endl;
}
void add(float a,float b)
{
    cout<< "sum of two Floating point integers: "<<a+b<<endl;
}
int main()
{
    int a,b; 
    float c,d;
    cout<<"Enter two Integer: ";
    cin>>a>>b;
    add(a,b);
    cout<<"Enter two floating point Numbers: ";
    cin>>c>>d;
    add(c,d);
    return(0);
}

#include<bits/stdc++.h>
using namespace std;
int absolute(int a)
{
    if(a<0)
    return (-1*a);
    else 
    return a;
}
float absolute(float b)
{
    if(b<0)
    return (-1.0*b);
    else 
    return b;
}

int main()
{
    int a;
    float b;
    cout<<"Enter a integer: ";
    cin>>a;
    cout<<"Absolute value of "<<a<<" is "<<absolute(a)<<endl;
    cout<<"Enter a Floating point number: ";
    cin>>b;
    cout<<"Absolute value of "<<b<<" is "<<absolute(b)<<endl;
    return(0);
}
