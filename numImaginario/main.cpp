#include "complejo.h";
#include <iostream>

using namespace std;


Complejo introducirComplejo(void);
void mostrarComplejo(Complejo a);

int main()
{
	char opc; //opción que el usuario introduce por teclado para decir si quiere salir. 'y' salir 'n' permanecer
	int exponente; //exponente para realizar potentencias
	do
	{

		//introducir complejos
		cout << "Primer complejo" << endl;
		Complejo a = introducirComplejo();
		mostrarComplejo(a);
		cout << "Segundo complejo" << endl;
		Complejo b = introducirComplejo();
		mostrarComplejo(b);

		//operaciones
		Complejo resultado = a.sumarComplejos(b);
		cout << endl << "Suma: ";
		mostrarComplejo(resultado);
		resultado = a.restarComplejos(b);
		cout << "Resta: ";
		mostrarComplejo(resultado);
		resultado = a.multiplicarComplejos(b);
		cout << "Multiplicacion: " ;
		mostrarComplejo(resultado);
		resultado = a.dividirComplejos(b);
		cout << "Division: ";
		mostrarComplejo(resultado);
		cout << endl << "Potencia usando la forma polar de " ;
		mostrarComplejo(a);
		cout << "Intruduce el exponente: ";
		cin >> exponente;
		resultado = a.potenciaComplejos(exponente);
		mostrarComplejo(resultado);

		//dar al usuario la opción de salir o volver a ejecutar el programa
		do 
		{
			cout << endl << "Desea salir? y/n ";
			cin >> opc;
		}
		while((opc != 'y') && (opc != 'n'));
	}
	while (opc == 'n');

}
//función para que usuario introduzca un número complejo por teclado
//parametros ---
//Retorno: Complejo con el número complejo ya creado.
Complejo introducirComplejo(void)
{
	float real = 0;
	float imaginario = 0;
	cout << "Introduce parte real: ";
	cin >> real;
	cout << "Introduce parte imaginaria: ";
	cin >> imaginario;
	return Complejo (real, imaginario);
	cout << endl;
}
//función para mostrar un número complejo en forma binómica y polar
//parámetro:
//Complejo a: Complejo que queremos mostrar.
void mostrarComplejo(Complejo a) 
{
	cout << a.getReal() << " ";
	if (a.getImaginario() >= 0)
	{
		cout << "+ ";
	}
	cout << a.getImaginario() << "i / " << a.getModulo() << " " << a.getArgumento() << "RAD" << endl;
}

