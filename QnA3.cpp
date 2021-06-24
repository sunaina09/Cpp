#include <iostream>
#include<cmath>
using namespace std;

class myClass{
public :
 float pi=3.1415;

//Write a program in C++ to convert temperature in Fahrenheit to Celsius.
void temp(int temf){
 cout<<"Input the temperature in Fahrenheit : "<<temf<<endl;
 int tempc= (5*(temf-32))/9;
 cout<<"The temperature in Fahrenheit :"<<temf<<endl<<"The temperature in Celsius :"<<tempc<<endl<<endl;
}

//Write a program in C++ to find the third angle of a triangle.
void angle(int a, int b){
cout<<"Input the 1st angle of the triangle :"<<a<<endl;
cout<<"Input the 2nd angle of the triangle : "<<b<<endl;
int c=180-(a+b);
cout<<"The 3rd of the triangle is :"<< c<<endl<<endl;
}

//Write a program in C++ that converts kilometers per hour to miles per hour.
void dist(float km){
cout<<"Input the distance in kilometer : "<<km<<endl;
float mls= 0.6213712*km;
cout<<"The "<<km<< "Km./hr. means "<<mls<<" Miles/hr."<<endl<<endl;
}

//Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
void tempk(float klvn){
cout<<"Input the temperature in Kelvin :"<< klvn<<endl;
float fhr=(9.0 / 5) * (klvn - 273.15) + 32;
cout<<"The temperature in Kelvin :"<<klvn<<endl<<"The temperature in Fahrenheit :"<<fhr <<endl<<endl;
}

//Write a program in C++ to convert temperature in Kelvin to Celsius.
void tempC(float klvn){
cout<<"Input the temperature in Kelvin :"<< klvn<<endl;
float celcius=klvn-273.15;;
cout<<"The temperature in Kelvin :"<<klvn<<endl<<"The temperature in Celsius : "<<celcius <<endl<<endl;
}

//Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
void tempf(float fhr){
cout<<"Input the temperature in Fahrenheit : "<< fhr<<endl;
float klvn=(5.0 / 9) * (fhr - 32) + 273.15;
cout<<"The temperature in Fahrenheit :"<<fhr<<endl<<"The temperature in Kelvin : "<<klvn <<endl<<endl;
}

//Write a program in C++ to convert temperature in Celsius to Kelvin.
void tempkvn(float cel){
cout<<"Input the temperature in Celsius : "<< cel<<endl;
float klvn=cel+273.15;
cout<<"The temperature in Celsius :"<<cel<<endl<<"The temperature in Kelvin : "<<klvn <<endl<<endl;
}

//Write a program in C++ to find the area of Scalene Triangle.
void area(int x, int y, float angle){
cout<<"Input the length of a side of the triangle :"<<x<<endl;
cout<<"Input the length of another side of the triangle :"<<y<<endl;
cout<<"Input the angle between these sides of the triangle :"<<angle<<endl;
float area= (x * y* sin((pi/180)*angle))/2;
cout<<"The area of the Scalene Triangle is :"<<area<<endl<<endl;
}

//Write a program in C++ to compute quotient and remainder.
void division(int p,int q){
cout<<"Input the dividend :"<<p<<endl;
cout<<"Input the divisor :"<<q<<endl;
int division= p/q;
int reminder= p%q;
cout<<"The quotient of the division is :"<< division<<endl;
cout<<"The remainder of the division is :"<< reminder<<endl<<endl;
}

//Write a program in C++ to compute the total and average of four numbers.
void math(float i, float j, float k, float l){
cout<<"Input 1st two numbers (separated by space) :"<<i<<" "<<j<<endl;
cout<<"Input last two numbers (separated by space) :"<<k<<" "<<l<<endl;
cout<<"The total of four numbers is :"<<i+j+k+l<<endl;
float avg= ((i+j+k+l) /4);
cout<<"The average of four numbers is :"<<avg<<endl<<endl;
}
};
myClass obj;

int main(){
obj.temp(95);
obj.angle(30,60);
obj.dist(25);
obj.tempk(300);
obj.tempC(300);
obj.tempf(80.33);
obj.tempkvn(26.85);
obj.area(5,6,6);
obj.division(25,3);
obj.math(25,20,15,25);
return 0;
}

