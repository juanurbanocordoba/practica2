#include <iostream>

using namespace std;
//esta funcion convierte las letras a sus respectivos valores
int conversor_de_romano_a_numero(int letra){
    if(letra==77){letra=1000;}
    if(letra==68){letra=500;}
    if(letra==67){letra=100;}
    if(letra==76){letra=50;}
    if(letra==88){letra=10;}
    if(letra==86){letra=5;}
    if(letra==73){letra=1;}
    return letra;

}
//esta funcion determina cuantas letras tiene el umero romano
int contador_de_caracteres(string numero_romano){
    int contador=0;

    while(numero_romano[contador]!=0){
        contador+=1;

   }
   return contador;
}
//esta funcion convierte las letras en numeros romanos a numeros normales
int main()
{
    string numero_romano;
    char letra,letra_siguiente;
    int contador_de_posicion=0, valor_total=0,valor_letra,valor_letra_siguiente;
    cout<<"ingrese el numero romano: ";
    cin>>numero_romano;
    letra=numero_romano[contador_de_posicion];
    valor_letra=conversor_de_romano_a_numero(letra);
    valor_total=0;
//este if mira si el numero de caracteres es menor o igual que 3 para realizar una operacion diferente a que si es mayot o igual que 3
if(contador_de_caracteres(numero_romano)>=3){
//este ciclo compara las posiciones de las letras y sus valores y aumenta al valor segun la oprecion que corresponta
    while(numero_romano[contador_de_posicion]!=0){
      letra=numero_romano[contador_de_posicion];
      letra_siguiente=numero_romano[contador_de_posicion+1];
      valor_letra=conversor_de_romano_a_numero(letra);
      valor_letra_siguiente=conversor_de_romano_a_numero(letra_siguiente);
//este if mira si el valor de la letra actual es mayor que el de la siguiente para elegir la operacion
      if(valor_letra>=valor_letra_siguiente){valor_total+=valor_letra;
      }else{valor_total+=(valor_letra_siguiente-valor_letra);}
          contador_de_posicion++;
    }}else{
    letra=numero_romano[contador_de_posicion];
    letra_siguiente=numero_romano[contador_de_posicion+1];
    valor_letra=conversor_de_romano_a_numero(letra);
    valor_letra_siguiente=conversor_de_romano_a_numero(letra_siguiente);
 //si se llega  este condicional significa el los caracteres son menores que 3 y por lo tanto se opera diferente
    if(valor_letra>=valor_letra_siguiente){valor_total=(valor_letra+valor_letra_siguiente);}else{valor_total=(valor_letra_siguiente-valor_letra);}}
   cout<<valor_total<<endl;

    return 0;
}
