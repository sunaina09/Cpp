#include <iostream>
using namespace std;

class Animal{
  public :
   void animalSound(){
   cout << "The animal makes a sound \n" ;
  }
};

class Cat: public Animal {
  public :
   void animalSound(string animal){
   cout<<"The Cat says: meow meow \n"+ animal;
   }
};

class Dog: public Animal{
  public:
   void animalSound(string animal){
   cout<<"The dog says: bow wow \n" + animal;
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

  myCat.animalSound("Cat");
  myDog.animalSound("Dog");
  myPig.animalSound();
}
