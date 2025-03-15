#include <iostream>
using namespace std;

class contaBancaria {
private:
    double saldo;

public:
    int nif;

    // Construtor para inicializar o saldo
    contaBancaria(double saldoInicial = 0.0) : saldo(saldoInicial) {}

    void escreve_saldo() {
        cout << "saldo: " << saldo << "\n";
    }

    void levantamento(float valor) {
        if (saldo >= valor) {
            saldo -= valor;
            cout << "Levantamento efetuado com sucesso\n";
        } else {
            cout << "Saldo insuficiente\n";
        }
    }
};

int main() {
    contaBancaria conta1(1500.0); // Inicializa o saldo com 1500
    contaBancaria cont2;
    conta1.nif = 211285641;

    conta1.escreve_saldo();
    cout << "NIF: " << conta1.nif << "\n";

    conta1.levantamento(2000);
    conta1.escreve_saldo();
    return 0;
}