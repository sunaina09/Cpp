#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a=10;
  int b=15;

  cout<<"max number is" <<max(a,b)<<endl;
  cout <<"min number is"<<min(a,b)<<endl;
  cout <<"square root of the 81 is"<<sqrt(81)<<endl;
  cout <<"round no is "<<round(5.32)<<endl<<endl;

  //boolean
  cout <<(a>b)<<endl;
  bool isCodingFun = true;
  cout <<isCodingFun <<"\n"<<endl ;

  //if else
  if (a>b){
    cout << " a is greater than b" <<endl;
  }else {
   cout << "b is greater" <<endl;
  }

return 0;
}
