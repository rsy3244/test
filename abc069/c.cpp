#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int n1=0,n2=0,n4=0;
	for(int i=0;i<n;i++){
		int t;
		cin >> t;
		switch(t%4){
			case 2:
				n2++;
				break;
			case 0:
				n4++;
				break;
			default:
				n1++;
				break;
		}
	}
	//cout << n1 << " " << n2 << " " << n4 << endl;
	bool flag=false;
	if(n1==n4+1 && n2%2==0)flag=true;
	else if(n1<=n4) flag=true;
	if(flag)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
