#include <iostream>
using namespace std;
#include "student.h"
#include <cstdlib>
#include "NODE.h"
#include "LL.h"

/*int main(){
MU_person m; //MU_Person m;
m.display_person();
 
student m1(6613121,2,"Vivi",101011);//,m2(112),m3;
m1.display(); // id gpa name
// student m1(6613118,3.9,"Atom");
//student m2(6613112),m3,*p;

  cout<<endl<<"======="<<endl;
m1.display_person(); //id

//  p=new student(6613265,1.7,"Hok");
 // delete p;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa*/


int main(int argc, char *argv[]) {
    LL A;
    
    
    for(int i = 1; i + 2 < argc; i += 3) {
        int id = atoi(argv[i]);
        double gpa = atof(argv[i+1]);
        string name = argv[i+2];

        NODE *t = new student(id, gpa, name);
        A.add_node(t);
    }

    cout << endl; 
    A.show_all();
    cout << endl;
    return 0;
}
