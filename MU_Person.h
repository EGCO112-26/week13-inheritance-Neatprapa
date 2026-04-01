
#include "NODE.h"
#include <iostream>
#include <string>
using namespace std;
/*class MU_person:public Thai_person{
private: //long id;
//string name;
protected:
  long id;
  string name;
  //Node *next;

public:
	MU_person(long=112 ,string ="Prapaporn",long=1234); //constructor (ชื่อเดียวกับคลาส)
  void display_person();
  ~MU_person(); //destructor


};*/

class MU_person:public NODE{
  protected:
    int id;
    string name;
  public:
    MU_person(long=0,string ="A");
    ~MU_person();
    void display_person();
};



MU_person::~MU_person(){
  cout<<"Node"<< id<<"is being deleted"<<endl;
}
/*MU_person::MU_person(long x,string n,long nid):Thai_person(nid){
   	  // Set up all MU_Person values
      id=x;
      name=n; 
      cout<<"MU person constructor "<<id<<endl;
}*/

MU_person::MU_person(long x,string n):NODE(x){
   	  // Set up all MU_Person values
      id=x;
      name=n; 
      cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"show info of a person"<<endl;
  cout<<"id: "<< id<<endl;
  cout<<"name:"<< name<<endl;
  
    
}
