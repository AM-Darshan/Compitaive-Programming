#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int min(int a,int b,int c){
    return a<b?a<c?a:c:b<c?b:c;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int td= (k*l)/nl;
    int lime= c*d;
    int salt= p/np;
    int ans= min(td,lime,salt)/n;
    cout<<ans;
    return 0;
}
