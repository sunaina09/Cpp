#include <iostream>
using namespace std;

//A reference variable is a "reference" to an existing variable
int main(){
 string food= "Pizza";
 string & meal= food;

 cout << food<< endl;
 cout <<meal<<endl;
 cout <<&meal<<endl;



 return 0;
}
