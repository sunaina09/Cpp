#include <iostream>

using namespace std;

int main(){
// string concatenation
string firstName= "Tom";
string lastName= "Peter";
string fullName= firstName +" "+ lastName;
cout << fullName <<endl;
string flName=  firstName.append(lastName);   // append
cout << flName <<endl;

//addition of strings
string x = "10";
string y = "20";
cout <<"addition of string a and string b is: "<< x + y <<"\n";

//Length
string myString= "abc@123";
cout << "length is myString :" <<myString.length()<<"\n";
//index
cout <<"using index 2 :"<<myString[2] <<endl;
//change index
myString[3]= '#';
cout << "changing @ to # :"<<myString << endl;

//User input strings
string FullName;
cout<< "enter your name";
//cin>> FullName;
//cout <<FullName <<endl;

getline(cin,FullName);
cout <<FullName;

return 0;
}
