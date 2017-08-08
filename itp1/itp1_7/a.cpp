#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int m,f,r;
		cin >> m >> f >> r;
		if(m==-1 && f==-1 && r==-1)break;
		if(m==-1 || f==-1){
			cout << "F" << endl;
			continue;
		}
		int score=m+f;
		if(score>=80){
			cout << "A" << endl;
		}
		else if(score>=65){
			cout << "B" << endl;
		}
		else if(score>=50){
			cout << "C" << endl;
		}
		else if(score>=30){
			if(r>=50) cout << "C" << endl;
			else cout << "D" << endl;
		}
		else cout << "F" << endl;
	}

	return 0;
}

