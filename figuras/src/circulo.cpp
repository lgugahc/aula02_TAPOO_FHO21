#include "circulo.hpp"

circulo::circulo()
{
    this->R = 0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
}

void circulo::setR(float R)
{
    this->R = R; // Foi setado o for R, para utilizar nas formulas
}
float circulo::area()
{
    return (3.14159265358979323846 *(this->R*R)); // Formula para achar a area do circulo
}

float circulo::diametro()
{
    return 2*R; // Formula para achar o diametro do circulo
}

circulo::~circulo()
{

}
