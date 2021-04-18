#ifndef ARVORE_H_
#define ARVORE_H_
#include <iostream>
#include <math.h>
#include "no.h"

using namespace std;

class Arvore{
    private:
        
        void ApagaRecursivo(No* node);
        void InsereRecursivo(No* &node, char letra);
        void DecodificaRecursivo(No* node, string frase, char anterior, int count);
        void CodificaRecursivo(No* node, char chave);

        No *raiz;
        string comando;
        
    public:
        Arvore();
        ~Arvore();

        void Codifica(char chave);
        void Decodifica(string frase);
        void Insere(char c);
        void Limpa();
        
        string get_comando(){ return this->comando; }
};






#endif /*ARVORE_H_*/