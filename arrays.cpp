#include <iostream>
using namespace std;

int main(){

 string cars[]= {"Volvo", "BMW", "Ford", "Mazda"};
 cout <<cars[2]<<endl;
 //can change the value
 cars[1]="Opel";
 cout << cars[1]<<endl;

 int Array[4];
 Array[0]= 52;
 Array[1]=80;
 Array[2]=36;
 Array[3]=68;


 //print all the values from array
 for (int i=0; i<4; i++){
    cout << cars[i]<<" ";
 }
cout <<endl<<endl;

 int j=0;
while(j<4){
    cout<<j <<" :"<<Array[j]<<"\n";
    j++;
}

 return 0;
}
