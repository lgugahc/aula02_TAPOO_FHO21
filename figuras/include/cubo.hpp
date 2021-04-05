#ifndef CUBO_HPP
#define CUBO_HPP


class cubo
{
    public:
        cubo();
        virtual ~cubo();
        void setA(float A); // Setando o valor de Area
        float area(); // formula de area
        float volume(); // Formula de volume

    protected:

    private:
        float A; // Valor de A
};

#endif // CUBO_HPP
