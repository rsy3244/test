#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;


int main(){
	int n;
	cin >> n;
	pair<int,int> temp;
	temp.first=-1;
	temp.second=-1;
	vector<pair<int,int> > list(n,temp);

	for(int i=0;i<n-1;i++){
		int a,b;
		cin >> a >> b;
		list[a].first=b;
		list[b].second=a;
	}
	vector<bool> map(n,true);
	map[0]=true;
	queue<int> q;
	int pos=0;
	int dis=0;
	q.push(0);
	while(!q.empty()){
		pos=q.front();
		if(pos==-1)continue;
		map[pos]=false;
		if(pos==n-1){
			break;
		}
		dis++;
		int n1=list[pos].first;
		int n2=list[pos].second;
		if(map[n1])q.push(n1);
		if(map[n2])q.push(n2);
		q.pop();
	}
	//	cout << dis << endl;
	if(dis%2==0)cout << "Fennec"  << endl;
	else cout << "Snuke" << endl;
	return 0;
}

		
