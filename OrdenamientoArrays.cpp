#include<iostream>
#include"funcionesArrays.h"
using namespace std;
int main(){
    //entrada de datos
    const int size=10;
    int arr[10]={};
    llenarArray(arr,size);
    //impresion de datos
    cout<<"El arreglo es: "<<endl;
    imprimirArray(arr,size);
    
    cout<<endl;
    //ordenamiento de datos
    ordenarArreglo(arr,size);
    cout<<"el arreglo es"<<endl;
    imprimirArray(arr,size);

    system("pause");
    return 0;
}