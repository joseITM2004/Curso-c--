#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    int i = 1;
    while (true)
    {
        cout << "digitar numero " << endl;
        cin >> x;
        if ((x >0 || x < 10) && i <= 3)
        {
            cout<<"numero fuera rango, intente de nuevo"<<endl;

            break;
        }
    }
    cout<<"el numero ingresado es "<< x <<endl;
    system("pause");
    return 0;
}