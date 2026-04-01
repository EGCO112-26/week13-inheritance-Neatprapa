#include "MU_Person.h"
#include <iostream>
#include <string>
using namespace std;
//#include "Thai_person.h"


/*class student:public MU_person{
private:
          double gpa; 
	
public:
    student(long=111 ,double=2.5,string="Nattawut",long=100000);
    ~student();
    void display(); // display_person
   
};*/

class student:public MU_person{
private:
          double gpa; 
	
public:
    student(long i, double g, string n); 
    void display();
   
};


//เอา id กับ name ส่งไปให้ MU_person ข้างในเลยเหลือแค่เซตค่า gpa อย่างเดียว
/*student::student(long i, double g,string s,long nid):MU_person(i,s,nid){ //:MU_person คือการส่งต่อข้อมูล 
// Finish constructor to set all values
    //id=i;
    gpa=g;
    //name=s;
         cout<<"MU student constructor  "<<gpa<<endl;
} //ถ้าไม่มีการส่งต่อข้อมูล id ของวีวี่จะเป็น 112 (ตรง MU person constructor จาก  112 กลายเป็น 6613121 แล้ว)*/

student::student(long i, double g,string n):MU_person(i,n){ 
  gpa=g;
  cout<<"MU person constructor "<<gpa<<endl;
}


void student::display(){
  //Finish Display function
  display_person(); //func that show name and id from MU_person.h
  cout<<"GPA:"<< gpa<<endl;
  
}
