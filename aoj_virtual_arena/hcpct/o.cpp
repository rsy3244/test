#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(){
	string str;
	cin >> str;
	bool flag=false;
	do{
		flag=true;
		for(int i=0;i<str.length()-2;i++){
			string temp={str[i],str[i+1],str[i+2]};
			if(temp=="ABC")str[i+1]='D';
			str.erace(i+2);
			str.erace(i);
		}
		

