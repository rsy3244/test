#include <iostream>
#include <utility>
using namespace std;
 
int main(){
 int n,c=0,minv=0,maxv=0,a;
 cin >> n;
 int m[9]={};

 for(int i=0;i<n;i++){
    cin >> a;
    if(a/400<8){
        m[a/400]=1;
    }
    else{
        m[8]++;
    }
 }
 for(int i=0;i<8;i++){
    c+=m[i];
 }
 if(c==0){
     minv=1;
 }
 else{
    minv=c;
 }
 maxv=c+m[8];
 cout << minv << " " << maxv << endl;
 
  return 0;
}