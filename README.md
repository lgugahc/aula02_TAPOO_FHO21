# aula02_TAPOO_FHO21

#include <iostream>

using namespace std;

class Animal{

    private:

    string name;
    int code;

    public:
    virtual void executaCaracteristica() = 0;
};

class Oviparo: public Animal
{
    public:
    void executaCaracteristica(){
        cout<<"botando ovo"<<endl;
    }
};

class Mamifero: public Animal
{
    public:
    void executaCaracteristica(){
        cout<<"Amamentando"<<endl;
    }
};

class Crocodilo: public Oviparo{
    public:
    void cacar(){
        cout << "estou cacando"<<endl;
    }
};

class Baleia: public Mamifero{
    public:
    void nadar(){
        cout<<"estou nadando"<<endl;
    }
};

int main(){

    //Animal a1; não permitido
    Mamifero m1;
    Oviparo o1;
    Crocodilo c1;
    Baleia b1;

    m1.executaCaracteristica();
    o1.executaCaracteristica();
    b1.nadar();
    c1.cacar();
    c1.executaCaracteristica();
    b1.executaCaracteristica();

}
