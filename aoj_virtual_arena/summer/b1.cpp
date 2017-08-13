#include <bits/stdc++.h>

#define INF 1e7

using namespace std;

int dp(int n,vector<int> tetra){
	int num;
	num=distance(tetra.begin(),upper_bound(tetra.begin(),tetra.end(),n)-1);

	vector<int> table(n+1,INF),temp(1,0);

	int c=0;
	while(table[n]==INF){
        vector<int> buf(0);
		for(int i=0;i<temp.size();i++){
            for(int j=1;j<tetra.size();j++){
                int next=temp[i]+tetra[j];
                if(table[next]!=INF){
                    table[next]=c;
                    buf.push_back(next);
                }
            }
        }
        temp=buf;
        c++;
    }


	return table[n];
}

int main(){
	vector<int> t(1,0),t1(1,0);
	int c=1;
	while(t[c-1]<=(int)1e6){
		int temp;
		temp=c*(c+1)*(c+2)/6;
		t.push_back(temp);
		if(temp%2==1 ){
			t1.push_back(temp);
		}
		c++;
	}

    vector<int> table((int)1e6+1,INF);


	while(true){
		int n;
		cin >> n;
		if(n==0)break;
		
		/*
		for(int i=0;i<s.size();i++){
			for(int j=0;j<s[i].size();j++){
				if(s[i][j]==INF) cout << "0";
				else cout << s[i][j];
				cout << " ";
			}
			cout << endl;
		}
		*/
		cout << dp(n,t) << " " << dp(n,t1) << endl;
	}
	return 0;
}
		
