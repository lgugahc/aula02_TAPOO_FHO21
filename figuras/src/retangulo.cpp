#include "retangulo.hpp"

retangulo::retangulo()
{
        this -> Y = 0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
        this -> Z = 0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
}

void retangulo::setY(float Y)
{
    this -> Y = Y; // Setando o valor de Y
}

void retangulo::setZ(float Z)
{
    this -> Z = Z; // Setando o valor de Z
}

float retangulo::area()
{
    return Y*Z; // Formula para achar a area do retangulo
}

float retangulo::perimetro()
{
    return 2*(Z+Y); // Forula utilizada para achar o perimetro do retangulo
}

retangulo::~retangulo()
{
    //dtor
}
