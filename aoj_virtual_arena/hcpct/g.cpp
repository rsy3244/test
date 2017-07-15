#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	while(true){
		int n,m;
		cin >> n >> m;
		if(n==0)break;
		int i=m;
		int c=0;
		bool flag=false;
		vector<int> list(n);
		while(true){
			int j=0;
			for(j=0;j<c+1;j++){
				if(i%list[j]==0)break;
			}
			if(



































