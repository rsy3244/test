#include <iostream>
#include <utility>
using namespace std;

int main(){
 int n,c=0,minv=0,maxv=0,a;
 cin >> n;
 int m[9];
 for(int i=0;i<9;i++)m[i]=0;
 for(int i=0;i<n;i++){
    cin >> a;
    if(a/400<8){
        if(m[a/400]==0)m[a/400]=1;
    }
    else if(a/400>=8){
        m[8]++;
    }
 }
 for(int i=0;i<8;i++){
    c+=m[i];
 }
 minv=c;
 if(c+m[8]<8){
    maxv=c+m[8];
 }
 else{
    maxv=8;
 }
 cout << minv << " " << maxv << endl;

  return 0;
}