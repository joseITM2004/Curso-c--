#include <iostream>
using namespace std;

//constants
const int row = 3;
const int column = 4;

//Function prototypes
void fullMatrix(double a[row][column]);
void printMatrix( double b[row][column]);
void transposseMatrix(double c[row][column], double d[column][row] );
void printMatrix2(double a[column][row]);

//Main function
int main()
{
    double matrix[row][column];
    double tranpossed[column][row];
    fullMatrix(matrix);  
    cout<<"The matrix is :"<<endl;
    printMatrix(matrix);
    transposseMatrix(matrix,tranpossed);
    cout<<"The transposed matrix is:"<<endl;
    printMatrix2(tranpossed);
    system("pause");
    return 0;
}

//Functions declaration

void printMatrix( double b[row][column]){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}

void fullMatrix(double a[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "enter the element" << "[" << i << ", " << j << "]" << endl;
            cin >> a[i][j];
        }
    }
}


void transposseMatrix(double c[row][column], double d[column][row]){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            d[j][i]=c[i][j];
        }
    }
}

void printMatrix2(double a[column][row]){
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}