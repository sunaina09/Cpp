#include <iostream>
using namespace std;

int main(){
   int a, b;
   int addition, subtraction, multiplication, division, Modulus ;

   cout << "enter the number a" << endl;
   cin >> a;

   cout << "enter the number b" << endl;
   cin >> b;

   addition = a+b ;
   subtraction= a-b;
   multiplication= a*b;
   division= a/b;
   Modulus= a%b;

   cout << "addition of the a and b is: " << addition <<endl;
   cout <<"subtraction of the a and b is: " << subtraction <<endl;
   cout <<"multiplication of the a and b is: " << multiplication <<endl;
   cout <<"division of the a and b is: " << division <<endl;
   cout <<"Modulus of the a and b is: " << Modulus <<endl;

return 0;
}
