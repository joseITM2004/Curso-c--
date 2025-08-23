#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (1 / i > 0.15)
    {
        cout << 1 / i << " " << endl;
        i++;
    }
    system("pause");
    return 0;
}