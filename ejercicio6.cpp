#include <iostream>

using namespace std;
//esta funcion convierte las letras minusculas cadena de caracteres a mayusculas
int main()
{
    string palabra_con_minusculas;
    cout<<"ingrese la frase pero cambie los espacios por guiones: ";
    cin>>palabra_con_minusculas;
    int ubicacion_de_la_letra=0, ascii_de_la_letra;
    //este ciclo compara cada posicion del la cadena y mira si es minuscula y si detecta que lo es la baja a minuscula y la reemplaza
    while(palabra_con_minusculas[ubicacion_de_la_letra]!=0){
        ascii_de_la_letra=palabra_con_minusculas[ubicacion_de_la_letra];
                if(ascii_de_la_letra>=97 && ascii_de_la_letra<=122){ascii_de_la_letra-=32;}
                palabra_con_minusculas[ubicacion_de_la_letra]=ascii_de_la_letra;
    ubicacion_de_la_letra+=1;
    }
    cout<<palabra_con_minusculas<<endl;
    return 0;
}
