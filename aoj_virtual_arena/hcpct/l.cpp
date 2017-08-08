#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	while(true){
		int n,t;
		cin >> n;
		if(n==0)break;
		stack<int> st;
		for(int i=0;i<n;i++){
			string str;
			cin >> str;
			int j=0;
			while(str[j]=='.'){
				j++;
			}
			if(str[j]>='0' && str[j]<='9'){
				t=str[j]-'0';
			}
			else{
				if(str[j]=='+'){
					t=-1;
				}
				else if(str[j]=='*'){
					t=-2;
				}
			}
			
			

