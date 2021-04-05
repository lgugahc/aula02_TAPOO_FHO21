#ifndef CIRCULO_HPP
#define CIRCULO_HPP


class circulo
{
    public:
        circulo();
        float area(); // Formula da area
        void setR(float R); // Setando um valor de Raio
        virtual ~circulo();
        float diametro(); // Formula do diametro



    private:
        float R; //para o valor do raio
};

#endif // CIRCULO_HPP
