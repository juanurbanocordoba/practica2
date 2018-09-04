#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int conversor_a_ascii(int letra){
    return letra;
}


int main()
{
    int contador_de_posicion=0,contador_de_letras=0,contador_de_numeros=0;
     string cadena_inicial,cadena_numerica,cadena_letras;
     cout<<"ingrese la cadena: ";
    cin>>cadena_inicial;

    while(cadena_inicial[contador_de_posicion]!=0){
      if(conversor_a_ascii(cadena_inicial[contador_de_posicion]>=48 && conversor_a_ascii(cadena_inicial[contador_de_posicion]<=57))){
          cadena_numerica[contador_de_numeros]=cadena_inicial[contador_de_posicion];
          contador_de_numeros++;
      }else{
         cadena_letras[contador_de_letras]=cadena_inicial[contador_de_posicion];
          contador_de_letras++;
      }

           contador_de_posicion++;
    }


    cout<<"cadena original: "<<cadena_inicial<<endl;
    cout<<"cadena numerica: ";
       for(int posicion=0;posicion<contador_de_numeros;posicion++){
           cout<<cadena_numerica[posicion];}
       cout<<endl;
    cout<<"cadena de texto: ";
       for(int posicion=0;posicion<contador_de_letras;posicion++){
           cout<<cadena_letras[posicion];}
       cout<<endl;




  return 0;

}
