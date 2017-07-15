#include <iostream>
#include <vector>

using namespace std;

int needleX[4]={0,1,0,-1};
int needleY[4]={1,0,-1,0};

bool fds(int x,int y,int xg,int yg,int color,vector<vector<int> > &map){
    if(map[x][y]!=c) return false;
    if(x==xg  && y==yg) return true;
    
}

int main(){
    while(true){
        int W,H;
        cin >> W >> H;
        if(W==0 && H==0)break;
        
        int xs,ys,xg,yg;
        cin >> xs >> ys;
        cin >> xg >> yg;
        int n;
        cin n;
        vector<vector<int> > map(W+2,vector<int>(H+2,0));
        
        for(int i=1;i<=W;i++){
            for(int j=1;j<=H;j++){
                cin >> map[i][j];

            }
        }
        int c=ma[xs][ys];

        bool flag=dfs(xs,ys,xg,yg,c,map);
        if(flag) cout << "OK" << endl;
        else cout << "NG" << end;
    }
  return 0;
}