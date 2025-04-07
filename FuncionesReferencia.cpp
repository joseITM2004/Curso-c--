#include <iostream>
using namespace std;
void imprimirArreglo(int arr[], int size); // Los arreglos siempre se guardan por referencia
float acumalacionArreglos(int arr[], int size);
void ordenarArreglo(int arr[], int size);
void maxMin(int arr[], int &min, int &max,int size);

int main()
{
    int min = 0;
    int max = 0;
    int array[5] = {15, 9, 70, 8,1};
    imprimirArreglo(array, 5);
    ordenarArreglo(array, 5);
    cout << "Array ya organizado" << endl;
    imprimirArreglo(array, 5);
    cout << "La suma de los elementos del arreglo es " << acumalacionArreglos(array, 5) << endl;
    maxMin(array,min,max,5);
    cout<<"El promedio es "<<acumalacionArreglos(array,5)/5<<endl;
    cout<<"El minimo es "<<min<<endl;
    cout<<"El maximo es "<<max<<endl;
    system("pause");
    return 0;
}
void imprimirArreglo(int arr[2], int size)
{
    for (int i = 0; i < size; i++)

    {
        cout << arr[i] << endl;
    }
}
float acumalacionArreglos(int arr[], int size)
{
    int suma = 0;
    for (int i = 0; i < size; i++)
    {
        suma += arr[i];
    }
    return suma;
}
void ordenarArreglo(int arr[], int size)
{
    int aux = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}
void maxMin(int arr[], int &min, int &max, int size)
{
    min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i <size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
}
