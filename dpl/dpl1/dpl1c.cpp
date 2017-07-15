#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,w1;
    cin >> n >> w1;
    int v[n],w[n];
    w1++;
    vector<int> now(w1,0);
    vector<int> last(w1,0);
    for(int i=0;i<n;i++){
        cin >> v[i] >> w[i];
        last[w[i]]=v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<w1;j++){
            if(j-w[i]>=0){
                now[j]=max(last[j],now[j-w[i]]+v[i]);
            }
            else{
                now[j]=last[j];
            }
        }
        now.swap(last);
    }
    cout << last.back() << endl;
}