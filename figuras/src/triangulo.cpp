#include "triangulo.hpp"
#include <math.h>

triangulo::triangulo()
{
    this -> H=0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios
    this -> B=0.0; // Colocando para limpar os caches e sempre começar zerado, para não pegar valores aleatorios

}

void triangulo::setB(float B)
{
    this->B = B; // Setando o valor de B
}

void triangulo::setH(float H)
{
    this->H = H; // Setando o valor de H
}

float triangulo::area()
{
    return (H*B)/2; // Formula utilizada para acha a area do triangulo
}

float triangulo::LadoA()
{
    return A = sqrt(pow((B/2),2)+pow(H,2)); // Formula utilizada para achar o lado "A" do triangulo
}

float triangulo::Alpha()
{
    return (asin(H/A)); // Formula utilizada para achar o Alpha do triangulo, valor em radiano
}

float triangulo::Beta()
{
    return 3.14159265358979323846 - 2*Alpha(); // Formula utilizada para achar o Beta do triangulo, valor em radiano
}

float triangulo::perimetro()
{
    return 2*A+B; // Finalizando, formula para achar o perimetro
}

triangulo::~triangulo()
{
    //dtor
}
