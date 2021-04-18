#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <time.h>
#include "arvore.h"
#include "no.h"

using namespace std; 
int main(int argc, char *argv[ ]){
    int count;

    fstream entrada(argv[1]); //"entrada_corrigida.txt"
    srand(time(NULL));
    Arvore arvbin;
    No nteste;

    if (entrada.is_open()){
        
        while(!entrada.eof()) {
        //for(int i = 0; i < 2; i++){ Caso queira fazer testes menores é só modificar o valor do i e comentar o while 
            string s1, linha;
            int tam;

            entrada >> s1;
            getline(entrada,linha);
            tam = linha.size();
                

            if(s1[0] == 'A'){ //Inserir
                count = 1;
                while(count < tam){
                    char s2 = linha[count];
                    arvbin.Insere(s2);
                    count++;
                }
                cout<<"\n";
 
            }
            if(s1[0] == 'C'){ //Codificar
                count = 1;
                while(count < tam){
                    char s2 = linha[count];
                    arvbin.Codifica(s2);
                    count++;
                }
                cout<<"\n\n";
            }
            if(s1[0] == 'D'){ //Decodificar
                arvbin.Decodifica(linha);
                cout<<"\n\n";

            } 
        }
    }
    else{
        cout << "Nao foi possivel abrir o arquivo de entrada \n";
        exit(0);
    }

    entrada.close();



return 0;
}