#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		string str;
		cin >> str;
		if(str=="-")break;
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			int s;
			cin >> s;
			string temp = str.substr(0,s);
			str.erase(str.begin() , str.begin()+s);
			str += temp;
		}
		cout << str << endl;
	}
	return 0;
}

