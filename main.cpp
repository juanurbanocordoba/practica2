#include <iostream>

using namespace std;

int main()
{
    int tamano_de_la_matriz,comparador_de_valores=0,acumulador_de_valores=0;
    cout<<"ingrese el tamano de la matriz: ";
    cin>>tamano_de_la_matriz;
    int matriz[tamano_de_la_matriz][tamano_de_la_matriz];
  //este for crea la matriz
    for(int i=0;i<tamano_de_la_matriz;i++){
        for(int j=0;j<tamano_de_la_matriz;j++){
            cout<<"digite el numero :"<<i<<","<<j<<": ";
            cin>>matriz[i][j];
        }}
  //este for mira cual es el valor que deben tener cada suma de numeros en columnas filas y diagonales
    for(int j=0;j<tamano_de_la_matriz;j++){
            comparador_de_valores+=matriz[0][j];}


   //este for muestra si las filas equivalen a ese valor
    for(int i=0;i<tamano_de_la_matriz;i++){
            for(int j=0;j<tamano_de_la_matriz;j++){
                acumulador_de_valores+=matriz[i][j];}
     if(acumulador_de_valores==comparador_de_valores){acumulador_de_valores=0;}else{break;}
         }
    //este for muestra si las columnas equivalen a ese valor
    for(int i=0;i<tamano_de_la_matriz;i++){
            for(int j=0;j<tamano_de_la_matriz;j++){
                acumulador_de_valores+=matriz[j][i];}
     if(acumulador_de_valores==comparador_de_valores){acumulador_de_valores=0;}else{break;}
         }
    //este for muestra si la diagonal pricipal equivale a ese valor
    if(acumulador_de_valores==0){
    for(int i=0;i<tamano_de_la_matriz;i++){
            for(int j=0;j<tamano_de_la_matriz;j++){
                if(i==j){acumulador_de_valores+=matriz[i][j];}}
     }
    //esate for muestra si la diagonal secundaria equivale a ese valor
    if(acumulador_de_valores==0){
    for(int i=tamano_de_la_matriz-1;i>=0;i--){
        for (int j=0;j<tamano_de_la_matriz;j++){
            if (tamano_de_la_matriz-1-i == j){
                acumulador_de_valores+=matriz[i][j];}
            }
    }}
    if(acumulador_de_valores==comparador_de_valores){acumulador_de_valores=0;}
   if(acumulador_de_valores==0)
    if(acumulador_de_valores==comparador_de_valores){acumulador_de_valores=0;}
    }




    for(int i=0;i<tamano_de_la_matriz;i++){
        for(int j=0;j<tamano_de_la_matriz;j++){
           cout<<matriz[i][j];}
        cout<<"\n";}
    if(acumulador_de_valores==0){cout<<"es un cubo magico"<<endl;}else{cout<<"no es un cubo magico"<<endl;}

    return 0;
}
