#include <iostream>
using namespace std;

class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};


class MyChild: public MyClass {
    public:
    void function1(){
    cout<<"Some content in another class." ;
    }
};


class MyGrandChild: public MyChild {
};

class MyGrandChild2: public MyChild {
};

int main() {
  MyGrandChild myObj;
  MyGrandChild2 myObj1;
  myObj.myFunction();
  myObj1.function1();
  return 0;
}
