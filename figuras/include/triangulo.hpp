#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP


class triangulo
{
    public:
        triangulo();
        virtual ~triangulo();

        void setH(float H); //Valor de altura
        void setB(float B); // Valor da Base
        float area(); // Calcular a area
        float perimetro(); // Calcular o perimetro
        float LadoA(); // Calcular o lado A
        float Alpha(); // Calcular o Alpha
        float Beta(); // Calcular o Beta

    protected:

    private:

        float H; // Altura do triangulo
        float B; // Base do triangulo
        float A; // Area do triangulo
};

#endif // TRIANGULO_HPP
