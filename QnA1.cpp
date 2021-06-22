#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void text(){
  cout<<"Welcome "<<endl<<endl;
}

void sum(int a, int b){
    int sum=a+b;
 cout<< "The sum of "<<a<<" and "<<b<<" is: "<<sum<<endl<<endl;
}

void dataTypesSize(){
 cout<<"The size of char is :"<<sizeof(char)<<" bytes"<<endl;
 cout<<"The size of short is :"<<sizeof(short)<<" bytes"<<endl;
 cout<<"The size of int is :"<<sizeof(int)<<" bytes"<<endl;
 cout<<"The size of long is :"<<sizeof(long)<<" bytes"<<endl;
 cout<<"The size of long long is :"<<sizeof(long long)<<" bytes"<<endl;
 cout<<"The size of float is :"<<sizeof(float)<<" bytes"<<endl;
 cout<<"The size of double is :"<<sizeof(double)<<" bytes"<<endl;
 cout<<"The size of long double is :"<<sizeof(long double)<<" bytes"<<endl;
 cout<<"The size of bool is :"<<sizeof(bool)<<" bytes"<<endl<<endl;
}

void dataTypesLimit(){
cout<<"The maximum limit of int: "<<INT_MAX<<endl<<"The minimum limit of int: "<<INT_MIN<<endl;
cout<<"The maximum limit of unsigned  int: "<<UINT_MAX<<endl;
cout<<"The maximum limit of long long: "<<LLONG_MAX<<endl<<"The minimum limit of long long: "<<LLONG_MIN<<endl;
cout<<"The maximum limit of unsigned long long: "<<ULLONG_MAX<<endl;
cout<<"The maximum limit of char : "<<CHAR_MAX<<endl<<"The minimum limit of char : "<<CHAR_MIN<<endl;
cout<<"The maximum limit of signed char : "<<SCHAR_MAX<<endl<<"The minimum limit signed of char : "<<SCHAR_MIN<<endl;
cout<<"The maximum limit of unsigned char : "<<UCHAR_MAX<<endl;
cout<<"The maximum limit of short  : "<<SHRT_MAX<<endl<<"The minimum limit of short : "<<SHRT_MIN<<endl;
cout<<"The maximum limit of unsigned short : "<<USHRT_MAX<<endl<<endl;
}

void primitiveValuesLimit(){
   char gender ='F';
   bool isMarried= true;
   int child= 2;
   int year= 2018;
   long salary= 1500000;
   double height=79.48;
   double GPA=4.69;
   long sdrawn=12047235;
   long Balance=995324987;
   cout<<"The gender is: "<<gender<<endl<<"Is she married? :"<<isMarried<<endl<<"Number of sons she has :"<<child<<endl<<"Year of her appointment :"<<year<<endl;
   cout<<"Salary for a year :"<<salary<<endl<<"Height is :"<<height<<endl<<"GPA is:" <<GPA<<endl<<"Salary drawn upto :"<<sdrawn<<endl<<"Balance till :"<<Balance<<endl<<endl;
}

void arithmaticOps(){
 int a=8,b=2;
 double c=4.0,d=2.4;

 cout<<"Addition: "<<a+b<<" ,"<<c+d<<" ,"<<b+c<<endl;
 cout<<"Subtraction: "<<a+b<<" ,"<<c-d<<" ,"<<b-c<<endl;
 cout<<"Multiplication: "<<a+b<<" ,"<<c*d<<" ,"<<b*c<<endl;
 cout<<"Divison: "<<a+b<<" ,"<<c/d<<" ,"<<b/c<<endl<<endl;
}

void overflow(){
  cout <<"maximum limit of int: 2147483647 minimum limit: -2147483648"<<endl;
  int n1=2147483647;
  cout<<"Increasing from its minimum range : "<<n1+1<<" /"<<n1+2<<endl;
  cout<<" Product is :" <<n1*n1<<endl;
  int n2=-2147483648;
  cout<<"Decreasing from its maximum range : "<<n2-1<<" /"<<n2-2<<endl;
  cout<<" Product is :" <<n2*n2<<endl<<endl;
}

void increDecrement(){
int a=57;
a++;
cout<<"After post increment by 1 the number is :"<<a<<endl;
++a;
cout<<"After pre increment by 1 the number is :"<<a<<endl;
a=a+1;
cout<<"After increasing by 1 the number is :"<<a<<endl;
a--;
cout<<"After post decrement by 1 the number is : "<<a<<endl;
--a;
cout<<"After pre decrement by 1 the number is : "<<a<<endl;
a=a-1;
cout<<"After decreasing by 1 the number is :"<<a<<endl<<endl;
}

void formattingOp(){
 double pi=3.14159265;
 cout<<"The value of pi 4 decimal place of total width 8 :" <<setw(8)<<pi<<endl;
 cout<<"The value of pi 4 decimal place of total width 10 :" <<setw(10)<<pi<<endl;

 cout << setfill('-');
 cout<<" The value of pi 4 decimal place of total width 8 : "<<setw(8)<<pi<<endl;
 cout<<" The value of pi 4 decimal place of total width 10 : "<<setw(10)<<pi<<endl;

 cout <<scientific;
 cout <<" The value of pi in scientific format is : " << pi << endl;

 bool d= false;
 cout<<"Status in number: "<< d<<endl<<boolalpha;
 cout<<"Status in alphabet : "<<d<<endl;
}

int main(){
  text();
  sum(29,30);
  dataTypesSize();
  dataTypesLimit();
  primitiveValuesLimit();
  arithmaticOps();
  overflow();
  increDecrement();//
  formattingOp();
 return 0;
}

