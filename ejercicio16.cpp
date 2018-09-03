#include <iostream>

using namespace std;
//esta funcion calcula el factorial de un numero
int calcular_factorial_de_un_numero(int numero)
{
    int resultado_factorial_del_numero;
    resultado_factorial_del_numero=1;
    if(numero==0){
        resultado_factorial_del_numero=1;
    }else{
        for(int i=2; i<=numero; i++){
            resultado_factorial_del_numero=resultado_factorial_del_numero*i;
        }
    }
 return  resultado_factorial_del_numero;
}
//esta funcion calcula la cantidad de caminos segun el tamaño de la malla
int main()
{
    int tamano_de_la_malla,caminos_totales;
   cout<<"ingrese el tamano de la malla: ";
   cin>>tamano_de_la_malla;
  //esta operacion usa la ecuacion de combinaciones para calcular la cantidad de caminos segun el tamaño de la malla y sus direcciones posibles
   caminos_totales=calcular_factorial_de_un_numero(tamano_de_la_malla+tamano_de_la_malla)/(2*(calcular_factorial_de_un_numero((tamano_de_la_malla+tamano_de_la_malla)-2)));
   cout<<"la cantidad de caminos posibles mara una malla "<<tamano_de_la_malla<<"x"<<tamano_de_la_malla<<" es "<<caminos_totales<<endl;

    return 0;
}
