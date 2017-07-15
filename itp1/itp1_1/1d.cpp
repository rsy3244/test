#include <iostream>

using namespace std;

int main(){
    int a,b[3];
    char *t;
    cin >> a;
    b[0]=a/3600;
    b[1]=(a-b[0]*3600)/60;
    b[2]=a%60;
    cout << b[0] << ":" << b[1] << ":" << b[2] <<endl;
    return 0;
}