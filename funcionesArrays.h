#pragma once
#include<iostream>
using namespace std;
void ordenarArreglo(int arr[],int size){
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int aux = 0;
            if (arr[i] > arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

void imprimirArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i] << "|" ;
    }
    cout<<endl;
}
void llenarArray(int arr[]){
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <size ; i++)
    {
        cout<<"ingrese el dato"<<i+1<<endl;
        cin>>arr[i];
    }
}