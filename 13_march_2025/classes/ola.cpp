#include <iostream>
using namespace std;

class	contaBancaria
{

	double saldo;

	public:
	int nif;

	void escreve_saldo(){
		cout<<"saldo:"<<saldo<<"\n";
	}

	void levantamento(float valor)
	{
		if(saldo >=valor) {
			saldo = saldo - valor;
			cout<<"Levantamento efetuado com sucesso";
		}
		else{
			cout<<"Saldo insuficiente";
		}
	}
};

int	main()
{

	contaBancaria conta1, cont2;;
	int a=20;
	conta1.nif=211285641;
	//cta1.saldo=1500;


//	cout<<"Saldo:"<<conta1.saldo;
	conta1.escreve_saldo();
	cout<<"NIF:"<<conta1.nif;



	conta.levantamento(2000)
	return 0;
}
