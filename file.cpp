#include <iostream>
#include <fstream>
using namespace std;


 string calculator( int a,int b){
   int addition, subtraction, multiplication, division, Modulus ;

   cout << "enter the number a" <<a<< endl;
   cout << "enter the number b" <<b<< endl;

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
   string all=to_string(addition+subtraction+multiplication+division+Modulus);
   return all;
 }

 void writeFile(string value){
   ofstream myFile("sample.txt");
   myFile<<value<<endl;
   for (int i=0; i<6; i++){
   myFile<<"Hello, Have a Good day !!"<<endl;
   }
   myFile.close();
 }

 void readFile(){
   //to read file
   ifstream readmyFile("sample.txt");
   string data;
   while(getline(readmyFile, data)){
      cout<<data<<endl;
   }
 }



int main(){
 string value=calculator(3,5);
 writeFile(value);
 readFile();
 return 0;
}
