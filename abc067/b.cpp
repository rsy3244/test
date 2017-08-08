#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> list(n);
	for(int i=0;i<n;i++){
		cin >> list[i];
	}
	sort(list.begin(),list.end());
	int ans=0;
	for(int i=n-1;i>=n-m;i--){
		ans+=list[i];
	}
	cout << ans << endl;
	return 0;
}
