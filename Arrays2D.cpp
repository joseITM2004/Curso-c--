#include<iostream>
#include<iomanip>
using namespace std;
int main() {
  int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cout<<setw(5)<<m[i][j];
}
cout<<endl;
}
return 0;
}
