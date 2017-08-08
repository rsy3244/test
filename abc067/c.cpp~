#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n;
	long int a=0,b=0;
	cin >> n;
	vector<int> list(n);
	for(int i=0;i<n;i++){
		cin >> list[i];
		b+=list[i];
	}
	b-=list[0];
	a=list[0];
	long ans=a>b?(a-b):(b-a);
	//cout << b << endl;
	for(int i=1;i<n;i++){
		a+=list[i];
		b-=list[i];
		long int t;
		if(a<b)t=b-a;
		else a-b;
		ans=min(ans,t);
	//	cout << ans << " ";
	}
	cout << ans << endl;
	return 0;
}
