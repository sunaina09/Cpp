#include <iostream>
using namespace std;

int main(){

cout << "while loop" << endl;
  int i= 0;
  while(i<=5){
   cout << i << endl;
   i++;
  }


 cout << "do-while loop" << endl;;
 int j=0;
 do {
    cout << j << "\n";
    j++;
 }
  while (j<3);

  cout << "************" <<endl;
  int a=5;
  do {
    cout << a<<endl;
    a++;
  }while (a>7);


 cout << "for loop" << endl;;
 for (int a=0; a<=4; a++){
    cout << a<< "\n";
 }

 cout << "******" << endl;;
 for (int b=1; b<=6; b++){
    cout <<b*2 <<endl;
 }

  return 0;
}
