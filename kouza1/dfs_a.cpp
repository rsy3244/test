#include <iostream>
#include <vector>

using namespace std;

int needlex[4]={-1,0,1,0};
int needley[4]={0,1,0,-1};

bool dfs(int x,int y,int goalx,int goaly,vector<vector<bool> >& map){
    if(x==goalx && y==goaly)return true;

    map[x][y]=false;

    for(int i=0;i<4;i++){
        int nextx=x+needlex[i];
        int nexty=y+needley[i];

        if(map[nextx][nexty]){
            bool flag=dfs(nextx,nexty,goalx,goaly,map);
            if(flag) return true;
        }
    }
    return false;
}

int main(){
    int h,w,sx,sy,gx,gy;
    char input;
    cin >> h >> w;
    vector<vector<bool> > map(h+2,vector<bool>(w+2,false));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin >> input;
            if(input!='#') map[i][j]=true;
            if(input=='s'){
                sx =i;
                sy =j;
            }
            if(input == 'g'){
                gx =i;
                gy =j;
            }
        }
    }

    bool result =dfs(sx,sy,gx,gy,map);
    if(result) cout << "Yes" << endl;
    else cout << "No" << endl;
  return 0;
}