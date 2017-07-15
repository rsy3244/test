#include <iostream>
using namespace std;
int main(void){
    int a,b,c,d;
    int x,y=-1;
    int ans[2]={0,0};
    cin >> a >> b >> c >> d;
    for(x=1;x<b;x++){
        y=b-x;
        if(c*x+d*y==a){
            if(ans[0]!=0){
                cout << "miss" << endl;
                return 0;
            }
            ans[0]=x;
            ans[1]=y;
        }
    }
    if(ans[0]==0){
        cout << "miss" << endl;
    }
    else cout << ans[0] << " " << ans[1] << endl;
    return 0;
}