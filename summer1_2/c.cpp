#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long x;
    cin >> n >> x;
    long prev,now;
    long ans = 0;
    cin >> prev;
    for(int i = 1;i<n;i++){
        cin >> now;
        int sum = sum;
        if(sum > x){
            ans +=  sum - x;
            int eat  =  sum - x;
            eat -=  now;
            if( eat < 0){
                now  =  0;
            }
            else{
                now -=  eat + now;
                
            }

            prev  =  now;
        }
    }
    cout << ans << endl;


    return 0;
}

