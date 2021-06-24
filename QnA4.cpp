#include <iostream>
#include <ctime>
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
cout<<"The quotient of "<<p<<" and "<<q<<" is :"<<d<<endl<<endl;
}

//34.Write a C++ program to display the current date and time.
void cTime(){
 time_t t= time(0);
 tm *Ptr= localtime(&t);

cout<<"seconds ="<<Ptr->tm_sec<<endl;
cout<<"minutes ="<<Ptr->tm_min<<endl;
cout<<"hours ="<<Ptr->tm_hour<<endl;
cout<<"day of month = "<<Ptr->tm_mday<<endl;
cout<<"month of year ="<<Ptr->tm_mon+1<<endl;
cout<<"year = "<<Ptr->tm_year+1900<<endl;
cout<<"weekday = "<<Ptr->tm_wday<<endl;
cout<<"day of year = "<<Ptr->tm_yday<<endl;
cout<<"daylight savings = "<<Ptr->tm_isdst<<endl;
cout<<"Current Date: "<<Ptr->tm_mday<<"-"<<Ptr->tm_mon+1<<"-"<<Ptr->tm_year+1900<<endl;
cout<<"Current Time: "<<Ptr->tm_hour<<":"<<Ptr->tm_min<<":"<<Ptr->tm_sec<<endl<<endl;
}

//35.Write a program in C++ to compute the specified expressions and print the output.
void result(){
cout<<"Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is :"<< (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5)<<endl<<endl;
}

//36. Write a program in C++ to test the Type Casting.
void typecasting(){
 cout<<"Print floating-point number in fixed format with 1 decimal place:"<<endl;
 int a=8, b=16;
 float c=5.5, d=6.6;
 cout<<"Test explicit type casting :"<<endl;
 cout<<a/b<<endl;
 cout<<(float)a/b<<endl;
 cout <<a/(float)b<<endl<<(double)a*b<<endl<<(double)a+b<<endl;

 cout<<"Test implicit type casting :"<<endl;
 cout<<(int)a/c<<endl<<(int)c+b<<endl;
 cout<<(int)d/b<<endl<<(int)a*d<<endl;

 cout<<"int implicitly casts to double:"<<endl;
 a=c;
 cout<<"c :"<<c<<endl<<"double truncates to int:"<<endl;
 d=b;
 cout<<"b :"<<b<<endl<<endl;
}

//37. Write a program in C++ to print a mystery series from 1 to 50.
void series(){
 cout<<" The series are: \n";
    for (int i=2;i<=50;i++){
       if ((i%3)==0){
           continue;
       }
       if ((i%2)==0){
          i+3;
       }else
       {
          i-3;
       }cout<<i<<" ";
    }
    cout<<endl<<endl;
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
obj.cTime();
obj.result();
obj.typecasting();
obj.mult(5);
obj.pattern();
obj.rect(8.5,5.6);
return 0;
}
