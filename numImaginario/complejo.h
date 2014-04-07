//Clase donde implementamos un n�mero complejo y los m�todos para operar con �l
#pragma once
class Complejo
{
private:
	float real; //parte real de un n�mero complejo en forma b�n�mica
	float imaginario;//parte imaginaria de un n�mero complejo en forma bin�mica
	float modulo;//m�dulo de un n�mero complejo en forma polar
	float argumento;//argumento de un n�mero complejo en forma polar expresado en radianes
public:
	//Constructor por defecto
	Complejo(void);
	/*Constructor de un n�mero complejo en forma bin�mica y polar
	parametros:
	const float& real: parte real de un n�mero complejo
	const float& imaginaria: parte imaginaria */
	Complejo(const float& real, const float& imaginario);
	//destructor por defecto
	~Complejo(void);
	//funci�n para retornar el atributo real
	float getReal(void);
	//funci�n para retornar el atributo imaginario
	float getImaginario(void);
	//funci�n para retornar el atributo modulo
	float getModulo(void);
	//funci�n para retornar el atributo argumento
	float getArgumento(void);
	/*funci�n para modificar el atributo Real
	Par�metros:
	const float& real: float con el nuevo valor para modificar real	*/
	void setReal(const float& real);
	/*funci�n para modificar el atributo imaginario
	Par�metros:
	const float& real: float con el nuevo valor para modificar imaginario*/
	void setImaginario(const float& imaginario);
	/*funci�n para realizar una suma de dos n�meros complejos
	Par�metros:
	compejo b: n�mero complejo que sumaremos a nuestra instancia en forma bin�mica
	Retorno: Un puntero con un nuevo n�mero complejo*/
	Complejo sumarComplejos(Complejo b);
	/*funci�n para realizar una resta de dos n�meros complejos en forma bin�mica
	Par�metros:
	compejo b: n�mero complejo que restaremos a nuestra instancia en forma bin�mica
	Retorno: Un puntero con un nuevo n�mero complejo*/
	Complejo restarComplejos(Complejo b);
	/*funci�n para realizar una mulstiplicaci�n de dos n�meros complejos en forma bin�mica
	Par�metros:
	compejo b: n�mero complejo que multiplicaremos a nuestra instancia
	Retorno: Un puntero con un nuevo n�mero complejo*/
	Complejo multiplicarComplejos(Complejo b);
	/*funci�n para realizar una division de dos n�meros complejos en forma bin�mica
	Par�metros:
	compejo b: n�mero complejo que dividiremos a nuestra instancia
	Retorno: Un puntero con un nuevo n�mero complejo*/
	Complejo dividirComplejos(Complejo b);
	/*funci�n para realizar una potencia un n�mero complejo en forma polar
	Par�metros:
	const int& exponente: valor del exponente para realizar la potencia
	Retorno: Un puntero con un nuevo n�mero complejo*/
	Complejo potenciaComplejos(const int& exponente);
	


};

