#include "quadrado.hpp"

quadrado::quadrado()
{
    this->L = 0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
}

void quadrado::setL(float L)
{
    this->L = L; // Setando L
}

float quadrado::area()
{

    return L = L*L; // Formula para achar a area do quadrado
}

float quadrado::perimetro()
{
    return L*4; // Formula utilizada para achar o perimetro do quadrado
}

quadrado::~quadrado()
{
    //dtor
}

