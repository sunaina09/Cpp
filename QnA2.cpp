#include <iostream>
#include <cmath>
using namespace std;

class myClass
{
public :
    double pi=3.141592;
};
myClass myObj;

void ops()
{
    cout<<endl<<"Result of 1st expression is :"<<(12*2-1);
    cout<<endl<<"Result of 2nd expression is :"<<((40+5)%8);
    cout<<endl<<"Result of 3rd expression is :"<<(15+(-5+2));
    cout<<endl<<"Result of 4th expression is :"<<((5*3)%4)<<endl<<endl;
}
void num()
{
    int p, r ;
    cout<<"Input 1st number :"<<endl;
    cin>>p;
    cout<<"Input 2nd number :"<<endl;
    cin>>r;
    cout<<" The sum of the numbers is : "<<p+r<<endl<<endl;
}
void numSwap()
{
    int a, b, c;
    cout<<"Input 1st number :"<<endl;
    cin>>a;
    cout<<"Input 2nd number :"<<endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping the 1st number is :"<<a<<endl;
    cout<<"After swapping the 2nd number is :"<<b<<endl<<endl;
}

void volume(int r)
{
    cout<<"Input the radius of a sphere :";
    cin>>r;
    cout<<"The volume of a sphere is : "<<((4*myObj.pi*(r*r*r))/3)<<endl<<endl;
}

int volume()
{
    int a;
    cout<<"Input the side of a cube :";
    cin>>a;
    cout<<"The volume of a cube is : "<<(a*a*a)<<endl<<endl;
    return 0;
}

void volume(int r, int h)
{
    cout<<"Input the radius of a cylinder :"<<endl;
    cin>>r;
    cout<<"Input the height of a cylinder :"<<endl;
    cin>>h;
    cout<<"The volume of a cylinder is : "<<(myObj.pi*(r*r*h))<<endl<<endl;
}

void area(int l, int w)
{
    cout<<"Input the length of the rectangle :"<<endl;
    cin>>l;
    cout<<"Input the width of the rectangle : "<<endl;
    cin>>w;
    cout<<"The area of the rectangle is :"<<l*w<<endl;
    cout<<"The perimeter of the rectangle is :"<<2*(l+w)<<endl<<endl;
}

void area(double x, double y, double z)
{
    cout<<"Input the length of 1st side of the triangle :"<<endl;
    cin>>x;
    cout<<"Input the length of 2nd side of the triangle :"<<endl;
    cin>>y;
    cout<<"Input the length of 3rd side of the triangle :"<<endl;
    cin>>z;
    double s=(x+y+z)/2;
    double areatr=sqrt(s*(s-x)*(s-y)*(s-z));
    cout<<"The area of the triangle is : "<<areatr<<endl<<endl;
}

void area(int r)
{
    cout<<"Input the radius(1/2 of diameter) of a circle :"<<endl;
    cin>>r;
    cout<<"The area of the circle is :"<<(myObj.pi)*r*r<<endl;
    cout<<"The circumference of the circle is :"<<2*(myObj.pi)*r<<endl<<endl;
}

void temp()
{
    int tempC;
    cout<<"Input the temperature in Celsius : "<<endl;
    cin>>tempC;
    cout<<"The temperature in Celsius :"<<tempC<<endl;
    int tempF=(9*tempC)/5+32;
    cout<<"The temperature in Fahrenheit : "<<tempF<<endl<<endl;
}

int main()
{
    ops();
    num();
    numSwap();
    volume(6);
    volume();
    volume(6,8);
    area(10,15);
    area(5,5,5);
    area(5);
    temp();
    return 0;
}


