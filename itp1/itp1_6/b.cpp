#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	pair<char,int> p;
	vector<pair<char,int> > list(n);
	vector<pair<char,int> > base(52);
	vector<bool> islost(52,true);
	for(int i=0;i<52;i++){
		switch(i/13){
			case 0:
				base[i].first='S';
				break;
			case 1:
				base[i].first='H';
				break;
			case 2:
				base[i].first='C';
				break;
			case 3:
				base[i].first='D';
				break;
		}
		base[i].second=i%13+1;
	}
	for(int i=0;i<n;i++){
		cin >> p.first >> p.second;
		for(int i=0;i<52;i++){
			if(p==base[i]){
				islost[i]=false;
				break;
			}
		}
	}
	for(int i=0;i<52;i++){
		if(islost[i])cout << base[i].first << " " << base[i].second << endl;
	}
	return 0;
}

