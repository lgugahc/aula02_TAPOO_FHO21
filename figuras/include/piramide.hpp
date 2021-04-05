#ifndef PIRAMIDE_HPP
#define PIRAMIDE_HPP


class piramide
{
    public:
        piramide();
        virtual ~piramide();

        void setAb(float Ab); // Setando o valor da area base
        void setH(float H); // Setando o valor de altura

        float volume(); // Formula para achar o volume
        float area(); // Formula para achar a area



    protected:

    private:

        float Ab; // Valor de area base
        float H; // Valor de altura
};

#endif // PIRAMIDE_HPP
