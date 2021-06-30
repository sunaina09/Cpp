#include <iostream>
#include <sstream>
#include <cmath>
#define pi 3.14159
using namespace std;

//41.Write a program in C++ to print an American flag on the screen.
void flg(){
    string str="* * * * * * ==================================";
    string str1=" * * * * *  ==================================";
    string str2="==============================================";

    bool flag= false;
    int  count=0;
    int no=10;
    while (! flag ){
        cout<<str<<endl<<str1<<endl<<str<<endl;
          count++;
          if (count>=3){
                flag=true;
          }
    } for (int i=0; i<8;i++){
      cout<<"=============================================="<<endl;
    }
}

//42.Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.
void reverseName(){
string fName, lName;
cout<<" \n enter the first name"<<endl;
cin>>fName;
cout<<"enter the last name"<<endl;
cin>>lName;
cout<<lName<<" "<<fName<<endl<<endl;
}

//43.Write a language program which accepts the radius of a circle from the user and compute the area and circumference.
void circle(float rad){
cout<<"Input the radius(1/2 of diameter) of a circle :"<<rad<<endl;
cout<<"The area of the circle is :"<<pi*rad*rad<<endl;
cout<<"The circumference of the circle is :"<<2*pi*rad<<endl<<endl;
}

//44.Write a language program to get the volume of a sphere with radius 6.
void vol(float r){
cout<<"Input the radius of a sphere :"<<r<<endl;
float vol=(4*pi*r*r*r)/3;
cout<<"The volume of a sphere is :"<<vol<<endl<<endl;
}

//45.Write a program in C++ to calculate the volume of a cube.
void volC(double c){
cout<<"Input the side of a cube :"<<c<<endl;
cout<<"The volume of a cube is :"<<c*c*c<<endl<<endl;
}

//46.Write a program in C++ to calculate the volume of a cylinder.
void volC(float r, float h){
cout<<"Input the radius of the cylinder :"<<r<<endl;
cout<<"Input the height of the cylinder :"<<h<<endl;
cout<<"The volume of a cylinder is :"<<pi*r*r*h<<endl<<endl;
}

//47.Write a program in C++ to find the area of any triangle using Heron's Formula.
void area(float x, float y, float z){
cout<<"Input the length of 1st side of the triangle :"<<x<<endl;
cout<<"Input the length of 2nd side of the triangle :"<<y<<endl;
cout<<"Input the length of 3rd side of the triangle :"<<z<<endl;
float s= (x+y+z)/2;
float areaTrngl=sqrt(s*(s-x)*(s-y)*(s-z));
cout<<"The area of the triangle is :"<<areaTrngl<<endl<<endl;
}

//48.Write a program in C++ which swap the values of two variables not using third variable.
void swapNum(int a, int b){
cout<<"Input 1st number :"<<a<<endl;
cout<<"Input 2nd number :"<<b<<endl;
int temp=a;
a=b;
b=temp;
cout<<"After swapping the 1st number is : "<<a<<endl<<"After swapping the 2nd number is :"<<b<<endl<<endl;
}

//49.Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character.
void asciiVal(char c){
cout<<"Input a character:"<<c<<endl;
cout<<"The ASCII value of a is:"<<(int)c<<endl;
cout<<"The character for the ASCII value "<<(int)c<<" is: "<<(char)((int)c)<<endl<<endl;
}

//50.Write a program in C++ to enter length in centimeter and convert it into meter and kilometer.
void length(float dist){
cout<<"Input the distance in centimeter :"<<dist<<endl;
cout<<"The distance in meter is:"<<dist/100<<endl;
cout<<"The distance in kilometer is:"<<dist/100000<<endl;
}

int main(){
flg();
reverseName();
circle(5);
vol(5);
volC(5);
volC(4,8);
area(5,6,7);
swapNum(25,20);
asciiVal('a');
length(250000);
return 0;
}
