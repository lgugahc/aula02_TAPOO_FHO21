#ifndef ESFERA_HPP
#define ESFERA_HPP


class esfera
{
    public:
        esfera();
        virtual ~esfera();

        void setRaio(float Raio); // Setando o valor de Raio
        float area(); // Formula de area
        float volume(); // Formula do volume
        float diametro(); // Formula do diametro


    protected:

    private:

        float Raio; // Setando um float para o Raio, numeros com virgula
};

#endif // ESFERA_HPP
