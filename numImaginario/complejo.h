//Clase donde implementamos un número complejo y los métodos para operar con él
#pragma once
class Complejo
{
private:
	float real; //parte real de un número complejo en forma bínómica
	float imaginario;//parte imaginaria de un número complejo en forma binómica
	float modulo;//módulo de un número complejo en forma polar
	float argumento;//argumento de un número complejo en forma polar expresado en radianes
public:
	//Constructor por defecto
	Complejo(void);
	/*Constructor de un número complejo en forma binómica y polar
	parametros:
	const float& real: parte real de un número complejo
	const float& imaginaria: parte imaginaria */
	Complejo(const float& real, const float& imaginario);
	//destructor por defecto
	~Complejo(void);
	//función para retornar el atributo real
	float getReal(void);
	//función para retornar el atributo imaginario
	float getImaginario(void);
	//función para retornar el atributo modulo
	float getModulo(void);
	//función para retornar el atributo argumento
	float getArgumento(void);
	/*función para modificar el atributo Real
	Parámetros:
	const float& real: float con el nuevo valor para modificar real	*/
	void setReal(const float& real);
	/*función para modificar el atributo imaginario
	Parámetros:
	const float& real: float con el nuevo valor para modificar imaginario*/
	void setImaginario(const float& imaginario);
	/*función para realizar una suma de dos números complejos
	Parámetros:
	compejo b: número complejo que sumaremos a nuestra instancia en forma binómica
	Retorno: Un puntero con un nuevo número complejo*/
	Complejo sumarComplejos(Complejo b);
	/*función para realizar una resta de dos números complejos en forma binómica
	Parámetros:
	compejo b: número complejo que restaremos a nuestra instancia en forma binómica
	Retorno: Un puntero con un nuevo número complejo*/
	Complejo restarComplejos(Complejo b);
	/*función para realizar una mulstiplicación de dos números complejos en forma binómica
	Parámetros:
	compejo b: número complejo que multiplicaremos a nuestra instancia
	Retorno: Un puntero con un nuevo número complejo*/
	Complejo multiplicarComplejos(Complejo b);
	/*función para realizar una division de dos números complejos en forma binómica
	Parámetros:
	compejo b: número complejo que dividiremos a nuestra instancia
	Retorno: Un puntero con un nuevo número complejo*/
	Complejo dividirComplejos(Complejo b);
	/*función para realizar una potencia un número complejo en forma polar
	Parámetros:
	const int& exponente: valor del exponente para realizar la potencia
	Retorno: Un puntero con un nuevo número complejo*/
	Complejo potenciaComplejos(const int& exponente);
	


};

