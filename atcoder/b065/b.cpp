#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        a[i]=t-1;
    }
    int l=0;
    int i;
    for(i=0;i<n;i++){
        l=a[l];
        if(l==1)break;
    }
    if(l!=1){
        cout << "-1" << endl;
        return 0;
    }
    cout << i+1 << endl;

    return 0;
}