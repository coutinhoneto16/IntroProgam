#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    float soma, mult, div, subt;
    string op;

    cout << "Digite um número: ";
    cin >> n1;
    
    cout << "Digite outro número: ";
    cin >> n2;
    
    cout << "Digite a operação [+,-,*,/]: ";
    cin >> op;  // Corrigido: leitura da operação

    if (op == "+") {
        soma = n1 + n2;
        cout << "O valor da soma é: " << soma << endl;
    } 
    else if (op == "-") {
        subt = n1 - n2;
        cout << "O valor da subtração é: " << subt << endl;
    } 
    else if (op == "*") {
        mult = n1 * n2;
        cout << "O valor da multiplicação é: " << mult << endl;
    } 
    else if (op == "/") {
        if (n2 != 0) {  // Verifica divisão por zero
            div = n1 / n2;
            cout << "O valor da divisão é: " << div << endl;
        } else {
            cout << "Erro: divisão por zero!" << endl;
        }
    } 
    else {
        cout << "Operação inválida!" << endl; // Mensagem para entrada incorreta
    }

    return 0;
}