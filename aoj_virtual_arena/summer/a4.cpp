#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,t,u,v,l;
    cin >> n >> k >> t >> u >> v >> l;
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        cin >> d;
    }
    int c=0,b = t * v;
    double ans=0;
    ans = d[0] / (double)u;
    for(int i = 1; i < n; i++){
        int dis = d[i] - d[i-1];
        if( dis - c > b){
            ans += t + c / (double)v + ( dis - c - t * v) / (double)u;
        }
        else{
            ans += dis / (double)v;
            c += t * v - l;
        }
    }
    int dis = l - d[i];
    if( dis < c + t * v){
        ans += dis / (double)v;
    }
    else{
        ans += t + c / (double)v + ( dis - c - t * v) / (double)u; 
    }
    cout << ans << endl;
    return 0;
}
