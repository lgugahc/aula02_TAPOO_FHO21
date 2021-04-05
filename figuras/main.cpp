#include <iostream>
#include <stdio.h>


#include "circulo.hpp"
#include "quadrado.hpp"
#include "triangulo.hpp"
#include "retangulo.hpp"
#include "esfera.hpp"
#include "cubo.hpp"
#include "dodecaedro.hpp"
#include "piramide.hpp"



using namespace std;

int main()
{
    float r, l, b, h, z, y, a, raio; // alguns floats utilizados para poder escolher quais funções seriam usadas

    circulo R; // Puxando a classe do Circulo, chamando ela apenas de R
    quadrado L; // Puxando a classe do Quadrado, chamando ela apenas de L
    retangulo Y; // Puxando a classe do Retangulo, chamando ela apenas de Y
    triangulo t; // Puxando a classe do Triangulo, chamando ela apenas de t
    cubo c; // Puxando a classe do Cubo, chamando ela apenas de c
    esfera e; // Puxando a classe da Esfera, chamando ela apenas de e
    dodecaedro d; // Puxando a classe do Dodecaedro, chamando ela apenas de d
    piramide p; // Puxando a classe da Piramide, chamando ela apenas de p

    int x, op; // Funções utilizadas para fazer o menu interativo

    cout << "___________________________"<<endl;
    cout << "|_-=FIGURAS GEOMETRICAS=-_|"<<endl;
    cout << "O=========================O" <<endl;
    cout << "||Escolha a dimensao     ||"<<endl;
    cout << "||                       ||"<<endl;
    cout << "||1 - 2D                 ||"<<endl;
    cout << "||2 - 3D                 ||"<<endl;
    cout << "||                       ||"<<endl;
    cout << "||0 - Sair               ||"<<endl;
    cout << "||                       ||"<<endl;
    cout << "O=========================O" <<endl;
    cout << "||  LUIS GUSTAVO CORREA  ||"<<endl;
    cout << "O=========================O"<<endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;

    if(x==1)
    {

    cout << endl;
    cout << "--------2D--------"<<endl;
    cout << "Escolha uma forma"<<endl;
    cout << "------------------" << endl;
    cout << endl;
    cout << "1 - Circulo" << endl;
    cout << "2 - Quadrado" << endl;
    cout << "3 - Triangulo" <<endl;
    cout << "4 - Retangulo" << endl;
    cout << endl;
    cout << "0 - Sair" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>op;


    switch(op)

    {
        case 1:

    cout << endl;
    cout << "Insira o raio do Circulo" << endl;
    cout << "Valor desejado: ";
    cin>>r;
    R.setR(r);

    cout << endl;
    cout << "A area do Circulo: ["<< R.area()<<"]"<<endl;
    cout << "O diametro do Circulo: ["<< R.diametro()<< "]"<<endl;

    cout << endl;
    cout << "==============="<<endl;
    cout << "DESEJA RETORNAR?" << endl;
    cout << endl;
    cout << "1 - Sim" << endl;
    cout << "2 - Nao" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;
        if(x==1)
        {
            return main();
        }
        if (x==2)
        {
            return 0;
        }
        if (x==0)
        {
            return 0;
        }
case 2:

    cout << endl;
    cout << "Insira o lado do Quadrado"<< endl;
    cout << "Valor desejado: ";
    cin>>l;
    L.setL(l);

    cout<<endl;

    cout << "A area do Quadrado: ["<< L.area()<<"]"<<endl;
    cout << "O perimetro do Quadrado: [" << L.perimetro()<<"]"<<endl;

    cout << endl;
    cout << "==============="<<endl;
    cout << "DESEJA RETORNAR?" << endl;
    cout << endl;
    cout << "1 - Sim" << endl;
    cout << "2 - Nao" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;
        if(x==1)
        {
            return main();
        }
        if (x==2)
        {
            return 0;
        }
        if (x==0)
        {
            return 0;
        }
case 3:

    cout << endl;
    cout << "Insira a base do Triangulo"<<endl;
    cout << "Valor desejado: ";
    cin>>b;
    t.setB(b);

    cout << endl;
    cout << "Insira a altura do Triangulo"<<endl;
    cout << "Valor desejado: ";
    cin>>h;
    t.setH(h);

    cout << endl;
    cout << "A area do Triangulo: ["<< t.area() << "]" <<endl;
    cout << "O lado do Triangulo: [" << t.LadoA() << "]" <<endl;
    cout << "O Alpha do Triangulo: [" << t.Alpha() << "] RAD "<<endl;
    cout << "O Beta do Triangulo: [" << t.Beta()<< "] RAD " <<endl;
    cout << "O perimetro do Triangulo: [" << t.perimetro() << "]" <<endl;

    cout << endl;
    cout << "==============="<<endl;
    cout << "DESEJA RETORNAR?" << endl;
    cout << endl;
    cout << "1 - Sim" << endl;
    cout << "2 - Nao" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;
        if(x==1)
        {
            return main();
        }
        if (x==2)
        {
            return 0;
        }
        if (x==0)
        {
            return 0;
        }

case 4:
    cout << endl;
    cout << "Insira a base do Retangulo"<<endl;
    cout << "Valor desejado: ";
    cin>>y;
    Y.setY(y);

    cout << endl;
    cout << "Insira a altura do Retangulo"<<endl;
    cout << "Valor desejado: ";
    cin>>z;
    Y.setZ(z);

    cout<<endl;
    cout << "A area do Retangulo: ["<<Y.area() << "]" <<endl;
    cout << "O perimetro do Retangulo: ["<<Y.perimetro() << "]" <<endl;

    cout << endl;
    cout << "==============="<<endl;
    cout << "DESEJA RETORNAR?" << endl;
    cout << endl;
    cout << "1 - Sim" << endl;
    cout << "2 - Nao" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;
        if(x==1)
        {
            return main();
        }
        if (x==2)
        {
            return 0;
        }
        if (x==0)
        {
            return 0;
        }

case 0:
    break;
    }

}

    if (x == 2)
    {
    cout << endl;
    cout << "--------3D--------"<<endl;
    cout << "Escolha uma forma"<<endl;
    cout << "------------------" << endl;
    cout << "1 - Esfera" << endl;
    cout << "2 - Cubo" << endl;
    cout << "3 - Piramide" <<endl;
    cout << "4 - Dodecaedro" << endl;
    cout << endl;
    cout << "0 - Sair" << endl;
    cout << endl;
    cout << "sua opcao: ";
    cin>>op;
    cout << endl;


    switch(op)

    {
case 1:

    cout << endl;
    cout << "Insira o raio da Esfera" << endl;
    cout << "Valor desejado: ";
    cin>>raio;
    e.setRaio(raio);


    cout << endl;
    cout << "A area da Esfera: [" << e.area() << "]"  <<endl;
    cout << "O volume da Esfera: [" << e.volume() << "]"  <<endl;
    cout << "O diametro da Esfera: ["<< e.diametro() << "]"  <<endl;

    cout << endl;
    cout << "==============="<<endl;
    cout << "DESEJA RETORNAR?" << endl;
    cout << endl;
    cout << "1 - Sim" << endl;
    cout << "2 - Nao" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;
        if(x==1)
        {
            return main();
        }
        if (x==2)
        {
            return 0;
        }
        if (x==0)
        {
            return 0;
        }
case 2:

    cout << endl;
    cout << "Insira o lado do Cubo"<< endl;
    cout << "Valor desejado: ";
    cin>>a;
    c.setA(a);

    cout<<endl;
    cout << "A area do Cubo: ["<< c.area() << "]"  <<endl;
    cout << "O volume do Cubo: ["<< c.volume() << "]"  <<endl;

    cout << endl;
    cout << "==============="<<endl;
    cout << "DESEJA RETORNAR?" << endl;
    cout << endl;
    cout << "1 - Sim" << endl;
    cout << "2 - Nao" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;
        if(x==1)
        {
            return main();
        }
        if (x==2)
        {
            return 0;
        }
        if (x==0)
        {
            return 0;
        }

case 3:

    cout << endl;
    cout << "Insira a base da Piramide"<<endl;
    cout << "Valor desejado: ";
    cin>>b;
    p.setAb(b);

    cout << endl;
    cout << "Insira a altura da Piramide"<<endl;
    cout << "Valor desejado: ";
    cin>>h;
    p.setH(h);

    cout << endl;
    cout << "A area da Piramide: [" << p.area() << "]"  <<endl;
    cout << "O volume da Piramide: [" << p.volume() << "]"  << endl;

    cout << endl;
    cout << "==============="<<endl;
    cout << "DESEJA RETORNAR?" << endl;
    cout << endl;
    cout << "1 - Sim" << endl;
    cout << "2 - Nao" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;
        if(x==1)
        {
            return main();
        }
        if (x==2)
        {
            return 0;
        }
        if (x==0)
        {
            return 0;
        }

case 4:

    cout << endl;
    cout << "insira o lado do Dodecaedro" << endl;
    cout << "Valor desejado: ";
    cin>>a;
    d.setL(a);

    cout << endl;
    cout << "A area do dodecaedro: [" << d.area() << "]"  << endl;
    cout << "O volume do dodecaedro: [" << d.volume() << "]"  << endl;

    cout << endl;
    cout << "==============="<<endl;
    cout << "DESEJA RETORNAR?" << endl;
    cout << endl;
    cout << "1 - Sim" << endl;
    cout << "2 - Nao" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin>>x;
        if(x==1)
        {
            return main();
        }
        if (x==2)
        {
            return 0;
        }
        if (x==0)
        {
            return 0;
        }

case 0:
break;

    }
    }
}
