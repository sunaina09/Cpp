#include <iostream>
using namespace std;

class myClass {

public :

//31.Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows.
void num(int a){
cout<<"Input the number :"<<a<<endl;
cout<<a<<a<<a<<a<<endl;
cout<<a<<" "<<" "<<a<<endl<<a<<" "<<" "<<a<<endl<<a<<" "<<" "<<a<<endl<<a<<" "<<" "<<a<<endl;
cout<<a<<a<<a<<a<<endl;
}

//32. Write a program in C++ to check whether a number is positive, negative or zero.
void numCheck(int num){
cout<<"Input a number :"<<endl;
cin>>num;
 if (num<0){
    cout<<"The entered number is negative."<<endl<<endl;
}else if (num>0){
    cout<<"The entered number is positive."<<endl<<endl;
}else{
    cout<<"The entered number is zero"<<endl<<endl;
}
}

//33.Write a program in C++ to divide two numbers and print on the screen.
void division(int p, int q){
int d=p/q;
cout<<"The quotient of"<<p<<" and "<<q<<" is :"<<d<<endl;
}

//34.Write a C++ program to display the current date and time.
void cTime(){

}

//35.Write a program in C++ to compute the specified expressions and print the output.
void result(){
cout<<"Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is :"<< (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5)<<endl<<endl;
}

//36. Write a program in C++ to test the Type Casting.

//37. Write a program in C++ to print a mystery series from 1 to 50.
void series(){
    //cout<<"The series are:"<<endl;
}

//38.Write a program in C++ that takes a number as input and prints its multiplication table upto 10.
void mult(int z){
cout<<"Input a number:"<<z<<endl;
 for (int i=1; i<=10;i++){
    cout<<"5*"<<i<<"= "<<z*i<<endl;
 }cout<<"\n";
}

//39.Write a program in C++ to print the following pattern.
void pattern(){
cout<<" xxxxx"<<endl;
cout<<"x     x     x        x   "<<endl;
cout<<"x           x        x   "<<endl;
cout<<"x        xxxxxxx  xxxxxxx"<<endl;
cout<<"x           x        x   "<<endl;
cout<<"x     x     x        x   "<<endl;
cout<<" xxxxx"<<endl<<endl;
}

//40. Write a program in C++ to print the area and perimeter of a rectangle.
void rect(float w, float h){
cout<<"Input the width of the rectangle:"<<w<<endl;
cout<<"Input the height of the rectangle:"<<h<<endl;
cout<<"The area of the rectangle is: "<<w*h<<endl;
cout<<"The perimeter of the rectangle is:"<<2*(w+h)<<endl<<endl;
}
};
myClass obj;

int main(){
obj.num(5);
obj.numCheck(8);
obj.division(30,10);
obj.result();
obj.mult(5);
obj.pattern();
obj.rect(8.5,5.6);
return 0;
}
