#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define PMAX (1e8)+1

int main(){
    vector<bool> p(PMAX, true);
    p[0]=p[1]=false;
    for(int i=2; i*i<PMAX;i++){
        if(p[i]){
            for(int j=2;i*j<PMAX;j++)p[i*j]=false;
        }
    }

    int n,input,ans =0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        if(p[input]) ++ans;
    }
    cout << ans << endl;
  return 0;
}