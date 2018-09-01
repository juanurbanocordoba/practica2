#include <iostream>
#include <math.h>
using namespace std;
//esta funcion convierte el caracter en entero
int conversor_de_ascii_a_entero(int numero){
 if(numero==48){numero=0;}
 if(numero==49){numero=1;}
 if(numero==50){numero=2;}
 if(numero==51){numero=3;}
 if(numero==52){numero=4;}
 if(numero==53){numero=5;}
 if(numero==54){numero=6;}
 if(numero==55){numero=7;}
 if(numero==56){numero=8;}
 if(numero==57){numero=9;}
 return numero;
}
//esta funcion recibe la cadena para convertirla a entero
int main()
{
    string numero_a_convertir;
    int digito_del_numero=0,numero_total=0;
    cout<<"ingrese el numero a anadir: ";
    int contador_de_cifras=0, i=0, multiplicador_de_cifras;
    cin>>numero_a_convertir;
   //este while calcula las cifras del numero
    while(numero_a_convertir[contador_de_cifras]!=0){
       contador_de_cifras++;}
   multiplicador_de_cifras=contador_de_cifras-1;
   //este for activa la funcio, extrae el numero y lo multiplica por 10 a la n segun su corresponda su ubicacion de cifra
   for(i=0;i<contador_de_cifras;i++){
       digito_del_numero=conversor_de_ascii_a_entero(numero_a_convertir[i]);
      numero_total+=digito_del_numero*pow(10,multiplicador_de_cifras);
       multiplicador_de_cifras-=1;




    }
 cout<<"el numero entero es: "<<numero_total<<endl;
}

