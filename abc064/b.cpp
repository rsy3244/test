#include <iostream>
#include <utility>
using namespace std;

int main(){
 int n,minv=1000,maxv=0,a;
 cin >> n;
 for(int i=0;i<n;i++){
    cin >> a;
    minv=min(minv,a);
    maxv=max(maxv,a);
 }
 maxv-=minv;
 cout << maxv << endl;

  return 0;
}