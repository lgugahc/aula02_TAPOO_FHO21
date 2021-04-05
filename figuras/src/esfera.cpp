#include "esfera.hpp"

esfera::esfera()
{
    this -> Raio = 0.0;  // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
}

void esfera::setRaio(float Raio)
{
    this-> Raio = Raio; // Setando o valor de Raio
}

float esfera::area()
    {
    return 4*(3.14159265358979323846 *(this->Raio*Raio)); // Formula utilizada para achar a area da esfera
    }

float esfera::volume()
    {
    return (3.14159265358979323846*(4)*(this->Raio*Raio*Raio))/3; // Formula utilizada para achar o volume da esfera
    }

float esfera::diametro()
{
    return 2*Raio; // Formula utilizada para achar o diametro da esfera
}

esfera::~esfera()
{
    //dtor
}
