#include <iostream>
#include <cmath>
using namespace std;

void studentData();
void mathFunctions(int a, int b);

int main(){
    int a= 5, b=9;
    cout<<"Hello, have a good day!!"<<endl<<endl;
    studentData();
    mathFunctions( a,  b);
return 0;
}

void studentData(){
 string name= "Tom";
 int roll_no= 15;
 char division= 'A';
 cout<< "student name is :"<< name<<endl<< " roll no is :"<<roll_no<<endl<<" He is from division: "<< division<<endl<<endl;
}

void mathFunctions(int a, int b){
  int sum= a+b;
  int mult= a*b;
  int div= a/b;
  int mod= a%b;
  cout<< "addition: " <<sum << endl<< "multiplication: "<<mult<< endl<< "division: "<< div<<endl<< "modulus: "<< mod<<endl;

}

