
#include <iostream>
#include<time.h>
#include<stdio.h>
#include <stdlib.h>
#include <random>
#include <ctime>
#include<stdbool.h>
using namespace std;
//esta funcion extarera una letra aleatoria de un arreglo va de A-Z
int main()
{ srand(time(NULL));
    int A=0;
    int B=0;
    int C=0;
    int D=0;
    int E=0;
    int F=0;
    int G=0;
    int H=0;
    int I=0;
    int J=0;
    int K=0;
    int M=0;
    int N=0;
    int L=0;
    int O=0;
    int P=0;
    int Q=0;
    int R=0;
    int S=0;
    int T=0;
    int U=0;
    int V=0;
    int W=0;
    int X=0;
    int Y=0;
    int Z=0;
   char nuevo_arreglo_de_letras[200]{};
   char letras_para_sacar[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char letra_obtenida;
   int contador_de_letras=1;
   while (contador_de_letras<=20){
    int random= rand()%26;
    letra_obtenida=*(letras_para_sacar+random);
    nuevo_arreglo_de_letras[contador_de_letras]=letra_obtenida;
    cout<<nuevo_arreglo_de_letras[contador_de_letras];
    contador_de_letras++;

    if(letra_obtenida=='A'){A++;}
    if(letra_obtenida=='B'){B++;}
    if(letra_obtenida=='C'){C++;}
    if(letra_obtenida=='D'){D++;}
    if(letra_obtenida=='E'){E++;}
    if(letra_obtenida=='F'){F++;}
    if(letra_obtenida=='G'){G++;}
    if(letra_obtenida=='H'){H++;}
    if(letra_obtenida=='I'){I++;}
    if(letra_obtenida=='J'){J++;}
    if(letra_obtenida=='K'){K++;}
    if(letra_obtenida=='M'){M++;}
    if(letra_obtenida=='N'){N++;}
    if(letra_obtenida=='L'){L++;}
    if(letra_obtenida=='O'){O++;}
    if(letra_obtenida=='P'){P++;}
    if(letra_obtenida=='Q'){Q++;}
    if(letra_obtenida=='R'){R++;}
    if(letra_obtenida=='S'){S++;}
    if(letra_obtenida=='T'){T++;}
    if(letra_obtenida=='U'){U++;}
    if(letra_obtenida=='V'){V++;}
    if(letra_obtenida=='W'){W++;}
    if(letra_obtenida=='X'){X++;}
    if(letra_obtenida=='Y'){Y++;}
    if(letra_obtenida=='Z'){Z++;}

   }
   cout<<"/"<<endl;
   cout<<"A="<<A<<endl;
   cout<<"B="<<B<<endl;
   cout<<"C="<<C<<endl;
   cout<<"D="<<D<<endl;
   cout<<"E="<<E<<endl;
   cout<<"F="<<F<<endl;
   cout<<"G="<<G<<endl;
   cout<<"H="<<H<<endl;
   cout<<"I="<<I<<endl;
   cout<<"J="<<J<<endl;
   cout<<"K="<<K<<endl;
   cout<<"L="<<L<<endl;
   cout<<"M="<<M<<endl;
   cout<<"N="<<N<<endl;
   cout<<"O="<<O<<endl;
   cout<<"P="<<P<<endl;
   cout<<"Q="<<Q<<endl;
   cout<<"R="<<R<<endl;
   cout<<"S="<<S<<endl;
   cout<<"T="<<T<<endl;
   cout<<"U="<<U<<endl;
   cout<<"V="<<V<<endl;
   cout<<"W="<<W<<endl;
   cout<<"X="<<X<<endl;
   cout<<"Y="<<Y<<endl;
   cout<<"Z="<<Z<<endl;

    return 0;
 }
