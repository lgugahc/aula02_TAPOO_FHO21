#include "cubo.hpp"

cubo::cubo()
{
    this -> A = 0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
}

void cubo::setA(float A)
{
    this -> A = A; // Setando o valor de A
}

float cubo::area()
{
    return 6*(A*A); // Formula para achar a area do cubo
}
float cubo::volume()
{
    return (A*A*A); // Formula para achar o volume, poderia ter usado a biblioteca math.h e usar um pow A,3, mas deixei por assim
}
cubo::~cubo()
{
    //dtor
}
