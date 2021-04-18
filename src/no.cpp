#include <iostream>
#include <math.h>
#include <string.h> 
#include <stdio.h>
#include "no.h"

using namespace std;

No::No(){
    char s = ' ';
    this->set_letra(s);
    esq = NULL;
    dir = NULL;
    anterior = NULL;
}

void No::set_valor(){
    char aux = get_letra();

    if(aux == ' ')  this->valor = -1;
    else if(aux == 'A')  this->valor = 0;
    else if(aux == 'B')  this->valor = 1; 
    else if(aux == 'C')  this->valor = 2; 
    else if(aux == 'D')  this->valor = 3; 
    else if(aux == 'E')  this->valor = 4; 
    else if(aux == 'F')  this->valor = 5; 
    else if(aux == 'G')  this->valor = 6; 
    else if(aux == 'H')  this->valor = 7; 
    else if(aux == 'I')  this->valor = 8; 
    else if(aux == 'J')  this->valor = 9; 
    else if(aux == 'K')  this->valor = 10; 
    else if(aux == 'L')  this->valor = 11; 
    else if(aux == 'M')  this->valor = 12; 
    else if(aux == 'N')  this->valor = 13; 
    else if(aux == 'O')  this->valor = 14; 
    else if(aux == 'P')  this->valor = 15; 
    else if(aux == 'Q')  this->valor = 16; 
    else if(aux == 'R')  this->valor = 17; 
    else if(aux == 'S')  this->valor = 18; 
    else if(aux == 'T')  this->valor = 19; 
    else if(aux == 'U')  this->valor = 20; 
    else if(aux == 'V')  this->valor = 21; 
    else if(aux == 'W')  this->valor = 22; 
    else if(aux == 'X')  this->valor = 23; 
    else if(aux == 'Y')  this->valor = 24; 
    else if(aux == 'Z')  this->valor = 25;
      
}

int No::get_valor2(char letra){
 

    if(letra == ' ')  return -1;
    else if(letra == 'A')  return 0;
    else if(letra == 'B')  return 1; 
    else if(letra == 'C')  return 2; 
    else if(letra == 'D')  return 3; 
    else if(letra == 'E')  return 4; 
    else if(letra == 'F')  return 5; 
    else if(letra == 'G')  return 6; 
    else if(letra == 'H')  return 7; 
    else if(letra == 'I')  return 8; 
    else if(letra == 'J')  return 9; 
    else if(letra == 'K')  return 10; 
    else if(letra == 'L')  return 11; 
    else if(letra == 'M')  return 12; 
    else if(letra == 'N')  return 13; 
    else if(letra == 'O')  return 14; 
    else if(letra == 'P')  return 15; 
    else if(letra == 'Q')  return 16; 
    else if(letra == 'R')  return 17; 
    else if(letra == 'S')  return 18; 
    else if(letra == 'T')  return 19; 
    else if(letra == 'U')  return 20; 
    else if(letra == 'V')  return 21; 
    else if(letra == 'W')  return 22; 
    else if(letra == 'X')  return 23; 
    else if(letra == 'Y')  return 24; 
    else if(letra == 'Z')  return 25;
    else return 9999;
      
}

No::~No(){
    
}