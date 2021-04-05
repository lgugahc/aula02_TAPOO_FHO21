#include "piramide.hpp"
#include <math.h>

piramide::piramide()
{
    this -> Ab = 0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
    this -> H = 0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
}

void piramide::setAb(float Ab)
{
    this -> Ab = Ab; // Setando o valor de Ab
}

void piramide::setH(float H)
{
    this -> H = H; // Setando o valor de H
}

float piramide::area()
{
    return Ab*(Ab+sqrt(pow(Ab,2)+4*pow(H,2))); // Formula usada para achar a area da piramide, aqui foi usada a biblioteca math.h para facilitar
}

float piramide::volume()
{
    return (Ab*H)/3; // Formula usada para acahar o volume da piramide
}

piramide::~piramide()
{
    //dtor
}
