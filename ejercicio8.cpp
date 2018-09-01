#include <iostream>
#include <string.h>
using namespace std;
int conversor_a_ascii(int letra){
    return letra;
}
int main()
{
    string cadena_inicial;
    char  letra_para_anadir;
    int posicion_de_la_cadena=0,contador_de_tamano=0;
    cout<<"ingrese la cadena de caracteres: ";
    cin>>cadena_inicial;
    while(cadena_inicial[posicion_de_la_cadena]!=0){
        contador_de_tamano+=1;
         posicion_de_la_cadena+=1;
    }
    string cadena_final[contador_de_tamano]="",cadena_numerica[contador_de_tamano]="";
    posicion_de_la_cadena=0;
    while(cadena_inicial[posicion_de_la_cadena]!=0){
        letra_para_anadir=cadena_inicial[posicion_de_la_cadena];
        if(conversor_a_ascii(letra_para_anadir)>=48 && conversor_a_ascii(letra_para_anadir)<=57){strcat(cadena_numerica,letra_para_anadir);
    }else{strcat(cadena_final,letra_para_anadir);}
        posicion_de_la_cadena+=1;
    }
    cout<<cadena_final<<endl;
    cout<<cadena_numerica<<endl;
    return 0;
}
