#include <iostream>
#include <utility>
using namespace std;

int main(){
 int n,c=0,d=0,i;
 cin >> n;
 char m[n];
 cin >> m;
 for(i=0;i<n;i++){
     if(m[i]=='('){
         c++;
     }
     else if(c>0){
         c--;
     }
     else {
         d++;
     }
 }
 for(i=0;i<d;i++)cout << '(';
 cout << m;
 for(i=0;i<c;i++)cout << ')';
 cout << endl;

  return 0;
}