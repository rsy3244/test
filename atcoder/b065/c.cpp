#include <iostream>
using namespace std;
int cmult(int n){
    int s=1;
    for(int i=2;i<=n;i++){
        s=(s*i)%((int)(1e9)+7);
    }
    return s;
}
int main(){
    int n,m;
    cin >> n >> m;
    int ans;
    int cn,cm;
    cn=cmult(n);
    cm=cmult(m);
    if(n==m){
        ans=((cmult(n)*cmult(m))*2)%((int)(1e9)+7);
    }
    else if(n-m==1 || n-m==-1){
        for(int i=0;i<cm;i++){
            ans=(ans+cn)%((int)(1e9)+7);
        }
    }
    else ans=0;
    cout << ans << endl;
    return 0;
}