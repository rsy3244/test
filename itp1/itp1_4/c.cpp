#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
	int a,b,q;
	char op;
	cin >> a >> op >> b;
	if(op=='?')break;
	if(op=='+'){
		q=a+b;
	}
	else if(op=='-'){
		q=a-b;
	}
	else if(op=='*'){
		q=a*b;
	}
	else if(op=='/'){
		q=a/b;
	}
	cout << q << endl;
	}
	return 0;
}
