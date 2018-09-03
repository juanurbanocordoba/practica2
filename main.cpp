#include <iostream>

using namespace std;
//esta funcion toma una matriz 5x5 la rellena y la rota 90, 180 y 270 grados
int main()
{
    int matriz[5][5],numeros_para_la_matriz=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matriz[i][j]=numeros_para_la_matriz;
                    numeros_para_la_matriz++;}}
   cout<<"matriz original: "<<endl;
//este for imprime la matriz original
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cout<<matriz[i][j]<<"|";}
        cout<<"\n";}
//este for imprime primero la columna 1 pero de abajo hacia arriba y aumenta a la columbna siguiente
    cout<<"matriz rotada 90 grados: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=4;j>=0;j--){
           cout<<matriz[j][i]<<"|";}
        cout<<"\n";}

//este for imprime primero la fila 5 y luego decrementa a la siguient fila
    cout<<"matriz rotada 180 grados: "<<endl;
    for(int i=4;i>=0;i--){
        for(int j=0;j<5;j++){
           cout<<matriz[i][j]<<"|";}
        cout<<"\n";}
//este for imrpime primero la columna 5 en su respectivo orden y luego decrementa a la siguiente columna
    cout<<"matriz rotada 270 grados: "<<endl;
    for(int i=4;i>=0;i--){
        for(int j=0;j<5;j++){
           cout<<matriz[j][i]<<"|";}
        cout<<"\n";}
    return 0;
}
