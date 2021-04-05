#ifndef QUADRADO_HPP
#define QUADRADO_HPP


class quadrado
{
    public:
        quadrado();
        virtual ~quadrado();

        void setL(float L); // Setando o valor do Lado
        float area(); // Formula para acha a area
        float perimetro(); // Formula para achar o perimetro

    protected:

    private:

        float L; //lado do quadrado
};
#endif // QUADRADO_HPP
