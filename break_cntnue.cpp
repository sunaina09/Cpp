#include <iostream>
using namespace std;

int main(){
cout << "***for loop using break***" <<endl;
  for (int i=0; i<=6; i++){
   if (i==5){
    break;
    }
   cout << i<< endl;
  }
cout << "***while loop using continue***" <<endl;

  int j=0;
  while(j<=5){
       if (j==2){
        j++;
        continue;
       }
     cout<< j<< endl;
     j++;
  }

  cout << "***do/while loop using continue***" << "\n";

  int k=0;
  do {
    cout << k<<endl;
    k++;
    if (k==3){
        k++;
        continue;
    }
  }while (k<=5);


return 0;
}
