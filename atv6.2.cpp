#include <iostream>
using namespace std;

int main(){
    int n1 = 0;
    int n2 = 0;
    int mult;
    cout << "Tabuada de 1 a 10: " <<endl;

while (n1< 10){

    n2 = 0; 
    while (n2 <10){
        mult = n1*n2;
        cout << n1 << " x " << n2 <<" = " << mult << endl;
        n2 = n2+1;
    }
    mult = n1*n2;

    cout << n1 << " x " << n2 <<" = " << mult << endl;
    n1 = n1+1;



}



}