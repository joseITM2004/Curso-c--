#include <iostream>
using namespace std;
// FUNCIONES
int sumaElementos(int filas, int arr[][3]);
void imprimirArreglo(int arr[], int size);
// nOTA:Para declarar una funcion que recibe como argumento un array bidimensional se debe declarar las columnas que tiene el arreglo

void organizarMatrizEnVector(int filaM, int M[][3], int v[]);

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int vector[9] = {0};
    cout << "El resultado es :" << sumaElementos(3, arr) << endl;
    organizarMatrizEnVector(3, arr, vector);
    imprimirArreglo(vector, 9);
    system("pause");

    return 0;
}
int sumaElementos(int filas, int arr[][3])
{
    int suma = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma += arr[i][j];
        }
    }
    return suma;
}

void organizarMatrizEnVector(int filaM, int M[][3], int v[])
{
    int pos = 0;
    for (int i = 0; i < filaM; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            v[pos] = M[i][j];
            pos++;
        }
    }
}

void imprimirArreglo(int arr[], int size)
{
    for (int i = 0; i < size; i++)

    {
        cout << arr[i] << endl;
    }
}