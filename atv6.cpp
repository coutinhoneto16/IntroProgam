//Gerar a sequência de 1 a 100 e mostrar a soma dos números pares.


#include <iostream>
using namespace std;

int main(){

    int i = 0;
    int soma = 0;



    while (i <= 100){
       if (i % 2 == 0){

        soma = soma + i;
        i = i + 1;

       } else {
        i = i + 1;

       }
    }

    cout << "A soma dos numeros pares de 1 a 100 é: " <<soma <<endl;


}