#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> num(100001,0);
	for(int i=0;i<n;i++){
		int t,s;
		cin >> t >> s;
		t--;
		s--;
		num[t]++;
		num[s]--;
	}
	int ans=0,temp=0,maxi=0;
	for(int i=1;i<100001;i++){
		temp+=num[i];
		if(temp>ans && i<=temp){
			ans=temp;
		}
	}
	cout << ans << endl;
	return 0;
}
