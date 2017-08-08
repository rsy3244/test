#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	double s,l,h;
	s=0.5*a*b*sin((double)c*M_PI/180);
	l=a+b+sqrt(a*a+b*b-2*a*b*cos(c*M_PI/180));
	h=2*s/a;
	printf("%f\n%f\n%f\n",s,l,h);
	return 0;
}
