#ifndef DODECAEDRO_HPP
#define DODECAEDRO_HPP


class dodecaedro
{
    public:
        dodecaedro();
        virtual ~dodecaedro();
        void setL(float L); // Setando o valor de Lado
        float area(); // Formula da area
        float volume(); // Formula do volume

    protected:

    private:

        float L; // Setando o valor de Lado
};

#endif // DODECAEDRO_HPP
