//Código feito no livecode do professor Thiago


#include <iostream>
using namespace std;


double saldo = 0.00;

void verificarSaldo(double saldo, string mes){

    cout << mes << ": " << saldo <<endl;

    if (saldo<0) {
        cout << "Seu saldo esse mês foi negativo em " << saldo << " economize mais no próximo mês!\n";
    } else {
        cout << "O saldo restante da conta foi de:\n " << saldo;
    }
}

double calcularDespesa (double aluguel, double contadeAgua, double contadeLuz, double internet, double transporte, 
    double alimentacao, double lazer, double academia){

    double despesas = aluguel + contadeAgua + contadeLuz + internet + transporte + alimentacao + lazer + academia;
    return despesas;

}

double calcularSaldo (double saldoInicial, double salario, double despesas ){
    double novoSaldo = saldoInicial + (salario - despesas);
    return novoSaldo;
}

int main(){

    // Janeiro
    double salarioJan = 1518.50;
    double aluguelJan = 400.00;
    double conta_de_aguaJan = 39.99;
    double conta_de_luzJan = 85.60;
    double internetJan = 89.99;
    double transporteJan = 100.00;
    double alimentacaoJan = 600.00;
    double lazerJan = 300.00;
    double academiaJan = 90.00;
    
    
    double despesaJan = calcularDespesa(aluguelJan, conta_de_aguaJan, conta_de_luzJan, 
        internetJan, transporteJan, alimentacaoJan, lazerJan, academiaJan);

    
    saldo = calcularSaldo (saldo, salarioJan, despesaJan);
    
    verificarSaldo(saldo, "Janeiro");


    //Fevereiro 
    double salarioFev = 1518.50;
    double aluguelFev = 400.00;
    double conta_de_aguaFev = 39.99;
    double conta_de_luzFev = 85.60;
    double internetFev = 89.99;
    double transporteFev = 100.00;
    double alimentacaoFev = 800.00;
    double lazerFev = 300.00;
    double academiaFev = 90.00;
    
    
    double despesaFev = calcularDespesa(aluguelFev, conta_de_aguaFev, conta_de_luzFev, 
        internetFev, transporteFev, alimentacaoFev, lazerFev, academiaFev);
    
    saldo = calcularSaldo (saldo, salarioFev, despesaFev);
    

    verificarSaldo(saldo, "Fevereiro");


    //Março
    double salarioMar = 3000.00;
    double aluguelMar = 400.00;
    double conta_de_aguaMar = 39.99;
    double conta_de_luzMar = 85.60;
    double internetMar = 89.99;
    double transporteMar = 100.00;
    double alimentacaoMar = 800.00;
    double lazerMar = 300.00;
    double academiaMar = 90.00; 

    double despesaMar = calcularDespesa(aluguelMar, conta_de_aguaMar, conta_de_luzMar,
         internetMar, transporteMar, alimentacaoMar, lazerMar, academiaMar);

    saldo = calcularSaldo (saldo, salarioMar, despesaMar);

    verificarSaldo(saldo, "Março");

}