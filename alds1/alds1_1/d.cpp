#include <iostream>
#include <utility>
using namespace std;

int main(){
    int n,i,minp,maxp=-1000000000;
    cin >> n;
    int m[n];
    for(i=0;i<n;i++)cin >> m[i];
    minp=m[0];
    for(i=1;i<n;i++){
        maxp=max(maxp,m[i]-minp);
        minp=min(minp,m[i]);
    }
    cout << maxp << endl;
    return 0;
}