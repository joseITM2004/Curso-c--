#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    double a=0;
    while (1 / i >0.15)
    {
        cout << 1 / i << " " << endl;
        i++;
    }
    while ((1 / a )> 0.15)
    {
        cout << 1 / a << " " << endl;
        a++;
    }
    system("pause");
    return 0;
}