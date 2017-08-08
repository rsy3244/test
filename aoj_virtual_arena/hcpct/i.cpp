#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int main(){
	while(true){
		int w,h;
		cin >> w >> h;
		vector<vector<bool> > vgate(h,vector<bool>(w-1,false));
		vector<vector<bool> > hgate(h-1,vector<bool>(w,false));
		int temp;
		for(int i=0;i<h;i++){
			for(int j=0;j<w-1;j++){
				cin >> temp;
				if(temp==0)vgate[i][j]=true;
			}
			if(i==h-1)break;
			for(int j=0;j<w;j++){
				cin >> temp;
				if(temp==0)hgate[i][j]=true;
			}
		}
		pair<int,int> mp;
		queue<pair<int,int> > q;
		mp.first=0;
		mp.second=0;
		q.push(mp);
		int ans=0;
		while(!q.empty()){
			mp.first=h-1;
			mp.second=w-1;
			if(q.front()==mp)break;
			mp=q.front();
			q.pop();
			ans++;
			int x=mp.second,y=mp.first;
			pair<int,int> np=mp;
			if(x>0 && vgate[y][x-1]){
				np.second=x-1;
				q.push(np);
				vgate[y][x-1]=false;
			}
			np=mp;
			if(x<w-1 && vgate[y][x]){
				np.second=x+1;
				q.push(np);
				vgate[y][x]=false;
			}
			np=mp;
			if(y>0 && hgate[y-1][x]){
				np.first=y-1;
				q.push(np);
				hgate[y-1][x]=false;
			}
			np=mp;
			if(y<h-1 && hgate[y][x]){
				np.first=y+1;
				q.push(np);
				hgate[y][x]=false;
			}
		}
		if(q.empty())cout << "0" << endl;
		else cout << ans << endl;
	}
	return 0;
}
