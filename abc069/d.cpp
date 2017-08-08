#include <bits/stdc++.h>

using namespace std;

int main(){
	int h,w,n;
	cin >> h >> w >> n;
	vector<vector<int> > list(h,vector<int>(w,0));
	int c=0;
	for(int i=0;i<n;i++){
		int t;
		cin >> t;
		for(int j=0;j<t;j++){
			list[c/w][c%w]=i+1;
			c++;
			//cout << i+1 << " ";
		}
		//cout << endl;
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(i%2==0){
				cout << list[i][j];
			}
			else{
				cout << list[i][w-j-1];
			}
			if(j!=w-1)cout << " ";
		}
		cout << endl;
	}
			

	return 0;
}

