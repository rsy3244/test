#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    map<char,int> list;
    for(char i='a';i<='z';i++){
        list[i]=-1;
    }
    bool flag=true;
    for(int i=0;i<str.length();i++){
        if(list[str[i]]!=-1){
            int dis=i-list[str[i]];
            if(dis==1){
                cout << i << " " << i+1 << endl;
                flag=false;
                break;
            }
            else if(dis==2){
                cout << i-1 << " " << i+1 << endl;
                flag=false;
                break;
            }
        }
        list[str[i]]=i;
    }
    if(flag)cout << "-1 -1" << endl;
    return 0;
}
