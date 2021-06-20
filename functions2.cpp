#include <iostream>
using namespace std;

void swapNums(int &x, int &y);
int myFunction1(int x);
bool myFunction1(double c, double d);

 void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  int a= 10;
  int b= 20;
 cout<< "before swap :"<<a<<" "<<b<<endl;
 swapNums(a,b);
 cout <<"after swap :"<<a<< " "<<b<<endl;

  myFunction("India");
  myFunction();
  cout <<myFunction1(2)<<endl;
  cout <<myFunction1(4.1,9.2)<<endl;
  return 0;
}
 void swapNums(int &x, int &y){
   int z=x;
   x=y;
   y=z;
 }


 int myFunction1(int x){
  int r= x*5;
  return r;
 }

 bool myFunction1(double c, double d){
 bool b= (d<c);
 return b;
 }




