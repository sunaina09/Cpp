#include <iostream>
using namespace std;

class myClass {
 private:
     int empSalary;
     string empId="1425";

 public :
    void setSalary(int s){
      empSalary=s;
    }

    void setId(string id){
     empId=id;
    }

    int getSalary(){
     return empSalary;
    }

    string getId(){
     return empId;
    }
};


int main(){
myClass obj;
myClass obj1;
obj.setSalary(80000);
cout<<obj.getSalary()<<endl;
obj1.setId("2351");
cout<<obj.getId()<<endl;
return 0;
}
