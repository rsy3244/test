#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> list(2*n,0);
    for(int i=0;i<2*n;i++){
        cin >> list[i];
    }
    sort(list.begin(),list.end());
    int ans=0;
    for(int i=0;i<2*n;i+=2){
        ans+=list[i];
    }
    cout << ans << endl;

    return 0;
}

