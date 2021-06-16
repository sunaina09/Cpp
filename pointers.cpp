#include <iostream>
using namespace std;

// A pointer , is a variable that stores the memory address as its value.
int main(){

 string food= "Burger";
 string * meal= &food;

 cout <<meal<<endl;
 cout<<* meal<<endl;

 *meal= "pizza";
 cout <<meal<<endl;
 cout <<*meal<<endl;

return 0;
}
