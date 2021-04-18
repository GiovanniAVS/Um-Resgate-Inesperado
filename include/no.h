#ifndef NO_H_
#define NO_H_
#include <iostream>
#include <math.h>

using namespace std;

class No{
    
    private:
       char letra;
       int valor = 0;
       No *esq;
       No *dir;
       No *anterior;
    public:
        No();
        ~No();
        void set_letra(char letra){ this->letra = letra;}
        void set_valor();
        char get_letra(){ return this->letra; }
        int get_valor(){ return this->valor; }
        int get_valor2(char letra);
    friend class Arvore;
};


#endif /*NO_H_*/