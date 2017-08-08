#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> a(10,0);
	for(int i=0;i<10;i++)a[i]=i;

	for(int i=0,j=0,k=0;i<10;i++){
		cout << i << " " << a[j++] ;
		cout << " " << a[++k] << endl;
	}
	return 0;
}
