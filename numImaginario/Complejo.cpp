#include "complejo.h"
#include <math.h>


Complejo::Complejo(void)
{
	real = 0;
	imaginario = 0;
	modulo = 0;
	argumento = 0;
}

Complejo::Complejo(const float& real, const float& imaginario)
{
	//forma binómica
	this->real = real;
	this->imaginario = imaginario;
	//forma polar
	modulo = sqrt(pow(this->real, 2) + pow(this->imaginario, 2));
	argumento = atan2(this -> imaginario, this -> real);
}

Complejo::~Complejo(void)
{
}
float Complejo::getImaginario(void)
{
	return imaginario;
}
float Complejo::getReal(void)
{
	return real;
}
float Complejo::getModulo(void)
{
	return modulo;
}
float Complejo::getArgumento(void)
{
	return argumento;
}
void Complejo::setImaginario(const float& imaginario)
{
	this->imaginario=imaginario;
}
void Complejo::setReal(const float& real)
{
	this->real=real;
}
Complejo Complejo::sumarComplejos(Complejo b)
{
	Complejo resultado( (real + b.getReal()) , (imaginario + b.getImaginario()) );
	return resultado;
}
Complejo Complejo::restarComplejos(Complejo b)
{
	Complejo resultado( (real - b.getReal()) , (imaginario - b.getImaginario()) );
	return resultado;
}
Complejo Complejo::multiplicarComplejos(Complejo b)
{
	Complejo resultado( ((real * b.getReal()) - imaginario*b.getImaginario() ) , ((real * b.getImaginario()) + imaginario * b.getReal()) );
	return resultado;
}
Complejo Complejo::dividirComplejos(Complejo b)
{
	float numeradorReal, numeradorImaginario, denominador;

	numeradorReal= (real * b.getReal()) + (imaginario  * b.getImaginario());
	numeradorImaginario = (imaginario * b.getReal()) - (real * b.getImaginario());
	denominador =   pow(b.getReal(),2) + pow(b.getImaginario(),2) ;
	
	Complejo resultado( numeradorReal / denominador , numeradorImaginario / denominador );
	return resultado;
}
Complejo Complejo::potenciaComplejos(const int& exponente)
{
	float nuevoModulo = 0;
	float nuevoArgumento = 0;

	//calculamos los nuevos módulos y exponentes
	nuevoModulo = pow(modulo, exponente);
	nuevoArgumento = pow(argumento, exponente);
	
	//generamos un nuevo complejo pasando la forma polar a binómica.
	return Complejo (nuevoModulo * cos(nuevoArgumento), nuevoModulo * sin(nuevoArgumento));

}