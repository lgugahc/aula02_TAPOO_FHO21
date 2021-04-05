#ifndef RETANGULO_HPP
#define RETANGULO_HPP


class retangulo
{
    public:
        retangulo();
        virtual ~retangulo();

        void setY(float Y); // Altura do retangulo
        void setZ(float Z); // Largura do retangulo
        float area(); // Calcular a area
        float perimetro(); // Calcular o perimetro


    protected:

    private:

        float Y; // Setando o valor para numeros com virgula
        float Z; // Setando o valor para numero com virgula

};

#endif // RETANGULO_HPP
