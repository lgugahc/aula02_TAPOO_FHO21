#include "dodecaedro.hpp"

dodecaedro::dodecaedro()
{
    this -> L = 0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
}

void dodecaedro::setL(float L)
{
    this -> L = L; // Setando o valor de L
}

float dodecaedro::area()
{
    return 20.654728807*(L*L); // Formula para achar a area do dodecaedro
}

float dodecaedro::volume()
{
    return 7.6631189606*(L*L*L); // Formula para achar o volume do dodecaedro
}

dodecaedro::~dodecaedro()
{
    //dtor
}
