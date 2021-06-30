#include <iostream>
using namespace std;

class Animal{
  public :
   void animalSound(){
   cout << "The animal makes a sound \n" ;
  }
   //Method overloading
  void animalSound(string name= "Tiger"){
   cout << "The animal makes a sound"+ name<< "\n" ;
  }

};

class Cat: public Animal {
  public :
   void animalSound(){
   cout << "The Cat says: meow meow \n" ;
  }

   void animalSound(string name){
   cout<<"The Cat says: meow meow" + name<< endl;
   }
};

class Dog: public Animal{
  public:
   void animalSound(string name){
   cout<<"The dog says: bow wow " + name<< endl;
   }
};

class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
  }
};

int main(){
  Animal myAnimal;
  Cat myCat;
  Dog myDog;
  Pig myPig;

  myCat.animalSound();
  myDog.animalSound("Dog");
  myPig.animalSound();
}
