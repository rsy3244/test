#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
	while(true){
		int m,t,p,r;
		cin >> m >> t >> p >> r;
		if(m==0)break;
		vector<vector<int> > list(t,vector<int>(p,-1));
		for(int i=0;i<r;i++){
			int m1,t1,p1,j;
			cin >> m1 >> t1 >> p1 >> j;
			t1--;
			p1--;
			if(j==1)list[t1][p1]-=20;
			else{
				if(list[t1][p1]<-1){
					list[t1][p1]=-list[t1][p1]+m1-1;
				}
				else{
					list[t1][p1]=m1;
				}
			}
		}
		pair<pair<int,int>,int> temp;
		temp.first.first=0;
		temp.first.second=0;
		temp.second=0;
		vector<pair<pair<int,int> ,int> score(t);
		for(int i=0;i<t;i++){
			score[i].second=-i-1;
			temp.first=0;
			temp.second=0;
			for(int j=0;j<p;j++){
					if(list[i][j]>-1){
						temp.first.first--;
						temp.first.second+=list[i][j];
					}
			}
			score[i].first=temp;
		}
		sort(score.begin(),score.end());
		for(int i=0;i<t;i++){
				cout << -score[i].second;
				if(i!=t-1){
					if(score[i].first==score[i+1].first){
						cout << "=";
					}
					else{
						cout << ",";
					}
				}
		}
		cout << endl;
	}
	return 0;
}
