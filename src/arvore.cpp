#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>
#include <time.h>
#include "no.h"
#include "arvore.h"

using namespace std;

Arvore::Arvore(){
    raiz = NULL;
}

Arvore::~Arvore(){
    Limpa();
}

void Arvore::Insere(char c){
    InsereRecursivo(raiz,c);
}

void Arvore::InsereRecursivo(No* &node, char letter){ 

    if(node==NULL){
        node = new No();
        node->letra = letter;
        node->set_valor();
    }
    else{
        if(node->get_valor2(letter) < node->valor)
            InsereRecursivo(node->esq, letter);
        else
            InsereRecursivo(node->dir, letter);
    }
}

void Arvore::Codifica(char chave) {
    CodificaRecursivo(raiz, chave);
}

void Arvore::CodificaRecursivo(No *node, char chave) { 
    int x = rand() % 10;
    
    if(node->get_valor2(chave) == -1){
        
    }
    if (node == NULL || (node->get_valor2(chave) ==  node->valor)) {
        cout<<"x";    
    }
    else if (node->get_valor2(chave) <  node->valor){
        do{
            x = rand() % 10;
        } while (x%2==0);
        cout<<x;
        CodificaRecursivo(node->esq, chave);
    }
    else if (node->get_valor2(chave) >  node->valor){
        do{
            x = rand() % 10;
        } while (x%2!=0);
        cout<<x;
        CodificaRecursivo(node->dir, chave);
    }
       
}

void Arvore::Decodifica(string frase) {
    char anterior = ' ';
    int count = 0;
    DecodificaRecursivo(raiz, frase, anterior, count);
}

void Arvore::DecodificaRecursivo(No *node, string frase, char anterior, int count) { 
    count++;

    if(count == frase.size()){ 
        cout<<node->letra<<" ";
    }

    else if(frase[count] == 'x' && anterior != 'x' && count > 1){
        cout<<node->letra;
        anterior = node->letra;
        DecodificaRecursivo(raiz, frase, anterior, count);

    }
    else if(frase[count] == 'x' && anterior == 'x'){
        cout<<raiz->letra;
        anterior = node->letra;
        DecodificaRecursivo(raiz, frase, anterior, count);

    }
    else if (frase[count]%2 == 0 && count > 1){
        anterior = node->letra;
        DecodificaRecursivo(node->dir, frase, anterior, count);
    }
    else if (frase[count]%2 != 0 && count > 1){
        anterior = node->letra;
        DecodificaRecursivo(node->esq, frase, anterior, count);
    }

    else{
        anterior = node->letra;
        DecodificaRecursivo(raiz, frase, anterior, count);

    }   
}

void Arvore::Limpa(){
    ApagaRecursivo(raiz);
    raiz = NULL;
}

void Arvore::ApagaRecursivo(No *p){
    if(p!=NULL){
        ApagaRecursivo(p->esq);
        ApagaRecursivo(p->dir);
        delete p;
    }
}
