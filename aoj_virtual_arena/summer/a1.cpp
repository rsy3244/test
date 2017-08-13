#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
    vector<pair<int , int> > invert(n);

    int nmax=-10,nmin=(int)1e7;
    for(int i = 0; i < n; i++){
        int a , b;
        cin >> a >> b;
        invert[i].first = b;
        invert[i].second = a;

        nmin = min(nmin,a);
        nmax = max(nmax,b);
        //cout << nmax << " " << nmin << endl;
    }
    sort(invert.begin() , invert.end());
    nmax = min(nmax , n);
    int ans=0;

    for(int i = nmax; i >= nmin-1; i--){
        vector<pair<int , int> >::iterator up;
        pair<int , int> mp(i+1,0);
        up = lower_bound(invert.begin() , invert.end() , mp);
        int lower = distance(invert.begin() , up);
        int c = 0;
        //cout << invert[lower].first << " " << invert[lower].second << endl;
        for(int j = lower; j < invert.size(); j++){
            if(invert[j].second <= i+1){
                c++;
            }
        }
        if(c >= i){
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
