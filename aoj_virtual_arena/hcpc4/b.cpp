#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	while(true){
		int n;
		cin >> n;
		if(n==0)break;
		vector<string> list(n);
		for(int i=0;i<n;i++){
			cin >> list[i];
			for(int j=0;j<list[i].length-1;j++){
				if(list[j]=='.' && list[j+1]!='.'){
					list[j]='+';
					break;
				}
			}
		}
		for(int i=n-1;i>=0;i--){
			
