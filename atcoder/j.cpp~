#include <bits/stdc++.h>

using namespace std;

int mergec(vector<int> &a){
	int cnt=0;
	int n=a.size();
	if(n>1){
		vector<int> b(a.begin(),a.begin()+n/2);
		vector<int> c(a.begin()+n/2,a.end());
		cnt+=mergec(b);
		cnt+=mergec(c);

		for(int i=0,j=0,k=0;i<n;i++){
			if(k==c.size()) a[i]=b[j++];
			else if(j==b.size()) a[i]=c[k++];
			else if(b[j]<=c[k]) a[i]=b[j++];
			else {
				a[i]=c[k++];
				cnt += n/2-j;
			}
		}
	}
		return cnt;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}


