#include <iostream>
#include <sstream>
#include <cmath>
#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;

//51. Write a program in C++ that converts kilometers per hour to miles per hour.
void dist(double a){
cout<<"Input the distance in kilometer :"<<a<<endl;
cout<<"The 5 Km./hr. means "<<5*0.6213712<<" Miles/hr."<<endl<<endl;
}

//52. Write a program in C++ to enter two angles of a triangle and find the third angle.
void angle(int x, int y){
cout<<"Input the 1st angle of the triangle :"<<x<<endl;
cout<<"Input the 2nd angle of the triangle :"<<y<<endl;
cout<<"The 3rd of the triangle is :"<<180-(x+y)<<endl<<endl;
}

//53. Write a program in C++ to calculate area of an equilateral triangle.
void area(int b){
cout<<"Input the value of the side of the equilateral triangle:"<<endl;
cout<<"The area of equilateral triangle is:"<<sqrt(3)/4*(b*b)<<endl<<endl;
}

//54. Write a program in C++ to enter P, T, R and calculate Simple Interest.
void interest(double p, double r, double t){
cout<<"Input the Principle:"<<p<<endl;
cout<<"Input the Rate of Interest:"<<r<<endl;
cout<<"Input the Time:"<<t<<endl;
double intr=(p*r*t)/100;
cout<<"The Simple interest for the amount "<<p<<" for 1 years @"<<r<<" % is:"<<intr<<endl<<endl;

}
//55. Write a program in C++ to enter P, T, R and calculate Compound Interest.
void interestI(float princi, float rate, float time){
cout<<"Input the Principle:"<<princi<<endl;
cout<<"Input the Rate of Interest:"<<rate<<endl;
cout<<"Input the Time:"<<time<<endl;
float compI=princi*pow((1+rate/100),time)-princi;
float comp=princi*pow((1+rate/100),time);
cout<<"The Interest after compounded for the amount "<<princi<<" for "<<time<<" years @ 10 % is:"<<compI<<endl;
cout<<"The total amount after compounded for the amount "<<princi<<" for "<<time<<" years @ 10 % is:"<<comp<<endl<<endl;
}

//56.Write a program in C++ to show the manipulation of a string.
void mani(){
string s="welcome, w3resource";
cout<<"The length of the string:"<<s.length()<<endl;
cout<<"The char at index 1 of the string:"<<s.at(1)<<endl;
cout<<"The char at index 1 of the string [using array ]::"<<s[1]<<endl;
cout<<"Is the string empty::"<<s.empty()<<endl;
cout<<"Retrieve the sub-string from 3rd position for 4 characters::"<<s.substr(3,4)<<endl;
cout<<"The sub-string replace by 'went'::"<<s.replace(3,4,"went")<<endl;
cout<<"Append a string 'end' at last of the string::"<<s.append(" end")<<endl;
cout<<"Append a string 'end' at last of the string using operator::"<<s+" end"<<endl;
cout<<"The string 'insert' inserting at 3rd position of the string::"<<s.insert(3," insert")<<endl;
cout<<"The new string is::"<<s<<endl;
cout << " Input a sentence:: ";
getline(cin, s);
cout << s << endl<< endl;
}

//57. Write a program in C++ to print the area of a hexagon.
void areaH(double s){
cout<<"Input the side of the hexagon:"<<s<<endl;
double area= (6*(s*s))/(4*tan(pi/6));
cout<<"The area of the hexagon is:"<<area<<endl<<endl;
}

//58.Write a program in C++ to print the area of a polygon.
void areaP(float n1, float p1){
cout<<"Input the number of sides of the polygon:"<<n1<<endl;
cout<<"Input the length of each side of the polygon:"<<p1<<endl;
float area= (n1*(p1*p1)/ (4*tan(pi/n1)));
cout<<"The area of the polygon is:"<<area<<endl<<endl;
}

//59.Write a program in C++ to compute the distance between two points on the surface of earth.
void dis(double lati1,double lati2,double longi1,double longi2){
cout<<"Input the latitude of coordinate 1:"<<endl;
cout<<"Input the longitude of coordinate 1:"<<endl;
cout<<"Input the latitude of coordinate 2:"<<endl;
cout<<"Input the longitude of coordinate 2:"<<endl;
double z=3.14159/180;
double distance= 6371.01* acos((sin(lati1*z)*sin(lati2*z))+(cos(lati1*z)*cos(lati2*z)*cos((longi1*z)-(longi2*z))));
cout<<"The distance between those points is:"<<distance<<endl<<endl;
}

//60.Write a program in C++ to add two binary numbers.
string binaryAdd(string a, string b){
 string result;
 int i= a.size()-1;
 int j= b.size()-1;
 int sum, carry=0;

 while(i>=0 || j>=0){
   sum=carry;
   if (i>=0) sum+= a[i]-'0';
   if (j>=0) sum+= b[i]-'0';
   result+= to_string(sum%2);
   carry= sum/2;
   i--,j--;
 }
 if (carry!=0)result+= '1';
 reverse(result.begin(), result.end());
 return result;
}

int main(){
  dist(5);
  angle(35,35);
  area(5);
  interest(20000,10,1);
  interestI(20000,10,1.5);
  mani();
  areaH(6);
  areaP(7,6);
  dis(25,35.5,35,25.5);
  cout<<"sum of strings are : "<<binaryAdd("1010", "0011");
  return 0;
}
