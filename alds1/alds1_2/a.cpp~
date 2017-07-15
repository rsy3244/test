#include <iostream>
#include <vector>

using namespace std;

int main(){
   int n;
   cin >> n;
   vector<int> S(n,0);
   for(int i=0;i<n;i++)cin >> S[i];
   int q;
   cin >> q;
   vector<int> T(q,0);
   for(int i=0;i<q;i++)cin >> T[i];
   int c=0;
   for(int i=0;i<q;i++){
       for(int j=0;j<n;j++){
           if(T[i]==S[j]){
               c++;
               break;
           }
       }
   }
   cout << c << endl;
  return 0;
}
