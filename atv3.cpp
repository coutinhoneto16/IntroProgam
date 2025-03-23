// Criar um código que calcule o salário líquido de um funcionário, aplicando imposto

#include <iostream>
#include <vector>
#include <string>
using namespace std;


void calcularDespesa(int quantidade, vector<string>& nomes, vector<double>& valores){
    for (int i = 0; i < quantidade; i++){
        string nome;
        double valor;

        cout << "Digite o nome da despesa " <<i + 1<< ": " <<endl;
        cin >> nome;
        nomes.push_back(nome);

        cout << "Digite o valor da despesa " << i + 1 << ": " <<endl;
        cin >> valor;
        valores.push_back(valor);
    }

}

int main(){

    double salariobruto;
    int quantidadedeDespesas;
    double salarioLiquido;
    double totalDespesas;

    vector<string> nomeDespesas;
    vector<double> valoresDespesas;

    cout << "Digite seu salário bruto: "<< endl;
    cin >> salariobruto;
    cout << "Digite a quantidade de suas despesas e o valor de cada: " << endl;
    cin >> quantidadedeDespesas;

    calcularDespesa(quantidadedeDespesas, nomeDespesas, valoresDespesas);

    for (double valor : valoresDespesas){
        totalDespesas += valor;
    }
    salarioLiquido = salariobruto - totalDespesas;


    cout << "Despesas cadastradas: " <<endl;
    for (int i = 0; i< quantidadedeDespesas; i++) {
        cout << "Despesa: " << nomeDespesas[i] << ", Valor: " <<valoresDespesas[i] <<endl;

    }
    
    cout << "\nTotal de despesas: " << totalDespesas << endl;
    cout << "Salário Liquido: " << salarioLiquido << endl;

    
}