#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> a(3);
    for (int i=0;i<3;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<3;i++){
        cout << a[i];
        if(i!=2) cout << " ";
    }
    cout << endl;

    return 0;
}