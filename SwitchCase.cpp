#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int opt = 0;
    bool opt2 = true;
    int num1 = 0, num2 = 0, result, opr = 1;
    while (opt2 == 1)
    {
        cout << "operacion # " << opr << endl;
        cout << "Ingrese la operacion " << endl;
        cout<<"1 para sumar\n2 para restar"<<endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Ingrese Numero 1 " << endl;
            cin >> num1;
            cout << "Ingrese Numero 2" << endl;
            cin>>num2;
            result = num1 + num2;
            opr++;
            break;
        case 2:
            cout << "Ingrese Numero 1 " << endl;
            cin >> num1;
            cout << "Ingrese Numero 2" << endl;
            cin>>num2; 
            result = num1 - num2;
            opr++;
            break;

        default:
            cout << "opcion no valida" << endl;
            cout<<"intente otra vez"<<endl;
            break;
        }
        cout << "El resultado es " << result << endl;
        system("pause");
        cout << "quiere seguir" << endl;
        cout << "1 para si\n 0 para no" << endl;
        cin >> opt2;
        system("pause");
        Sleep(5000);
    }
    system("pause");
}