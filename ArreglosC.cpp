#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char input[11];
    string hola="hola";
    char hi[6]={'h','o','l','a','s,''};
    char h[]="hola";
    for(int i=0;i<5;i++){
        cout<<hi[i];
    }
    cout<<endln;

    cout<<hola<<endl;
    cout<<hi<<endl;
    cout<<h<<"\a"<<endl;
    cout<<sizeof(hola)/sizeof(hola[0])<<endl;;
    cout<<sizeof(hi)/sizeof(hola[0])<<endl;
    cout<<sizeof(h)/sizeof(h[0])<<endl;
    cin>>input;
    cout<<input<<endl;
cin.getline(input,10,'\n');
    cout<<input<<endl;


    system("pause");
    return 0;
}
