#include <bits/stdc++.h>

using namespace std;

int abs(int a,int b){
	return a>b ? a-b:b-a;
}


int main(){
	int n,k;
	vector<bool> flag(2,false);
	cin >> n >> k;
	vector<int> list(n);
	for(int i=0;i<n;i++){
		cin >> list[i];
	}
	sort(list.begin(),list.end());
	if(*list.end()<k){
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		if(list[i]%2==1)flag[0]=true;
		else flag[1]=true;
		if(flag[0] && flag[1])break;
	}
	if(flag[0] && flag[1]){
		cout << "POSSIBLE" << endl;
	}
	else {
		cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}

