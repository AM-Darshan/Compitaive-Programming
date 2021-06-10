#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)
int min(int a,int b){
    return a<b?a:b;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,r,n;
    cin>>n;
    int lc=0,rc=0;
    LOOP(i,0,n){
        cin>>l>>r;
        lc+=l;
        rc+=r;
    }
    lc= min(lc,n-lc);
    rc= min(rc,n-rc);
    cout<<lc+rc;
    return 0;
}