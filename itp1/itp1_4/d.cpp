#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,t;
	cin >> n;
	long long nmax=-10000000,nmin=10000000,nsum=0;
	for(long long i=0;i<n;i++){
		cin >> t;
		if(nmax<t)nmax=t;
		if(nmin>t)nmin=t;
		nsum+=t;
	}
	cout << nmin << " " << nmax << " " << nsum << endl;
	return 0;
}
