#include <iostream>
#include <stack>
#include <vector>
#include <stack>

using namespace std;

int p,q,r;
void invert(stack<int> &st){
    int x;
    x=st.top();
    st.pop();
    while(!st.empty()){
        if(st.top()!=-1)break;
		st.pop();
        x=(x-1)*(-1)+1;
	//	cout << st.size();
    }
	st.push(x);
    return;
}

void calc(stack<int> &st){
	int x,y;
	while(true){
		invert(st);
		x=st.top();
		st.pop();
		if(st.top()==-4){
			st.pop();
			st.push(x);
			invert(st);
			break;
		}
		else{
			int t=st.top();
			st.pop();
			invert(st);
			if(t==-2){
				y=st.top();
				st.pop();
				st.push(max(x,y));
			}
			else if(t==-3){
				y=st.top();
				st.pop();
				st.push(min(x,y));
			}
		}
	}
	return;
}

int main(){
	while(true){
		string str;
		cin >> str;
		int ans=0;
		stack<int> st;
		if(str[0]=='.')break;
		for(p=0;p<3;p++){
		for(q=0;q<3;q++){
		for(r=0;r<3;r++){
			for(int i=0;i<str.length();i++){
				if(str[i]=='(')st.push(-4);
				else if(str[i]=='-')st.push(-1);
				else if(str[i]=='+')st.push(-2);
				else if(str[i]=='*')st.push(-3);
				else if(str[i]=='P')st.push(p);
				else if(str[i]=='Q')st.push(q);
				else if(str[i]=='R')st.push(r);
				else if(str[i]==')')calc(st);
				else st.push((int)(str[i]-'0'));
			}
			if(st.size()!=1){
				invert(st);
			}
			if(st.top()==2)ans++;
		}
		}
		}
		cout << ans << endl;
	}
	return 0;
}
