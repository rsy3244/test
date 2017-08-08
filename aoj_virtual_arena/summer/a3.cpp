#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,w,h;
	cin >> n >> w >> h;
	vector<bool> line(h+1,false),column(w+1,false);
	for(int i=0;i<n;i++){
		int x,y,r;
		cin >> x >> y >> r;
		for(int j=-r;j<=r;j++){
			if(x+j>=0 && x+j<=w){
				column[x+j]=true;
			}
			if(y+j>=0 && y+j<=h){
				line[y+j]=true;
			}
		}
	}
	bool flag1=true,flag2=true;
	for(int i=0;i<=h;i++){
		if(!line[i]){
			flag1=false;
			break;
		}
	}
	for(int i=0;i<=w;i++){
		if(!column[i]){
			flag2=false;
			break;
		}
	}
	if(flag1 || flag2)cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}
