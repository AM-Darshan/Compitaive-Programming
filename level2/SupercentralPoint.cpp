#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,count=0;
    cin>>n;
    int x[n+1], y[n+1];
    LOOP(i,0,n){
        cin>>x[i]>>y[i];
    }
    LOOP(i,0,n){
        bool u=false, r= false, l= false, d= false;
        LOOP(j,0,n){
            if(x[i] > x[j] && y[i] == y[j]) l=true;
            else if (x[i] < x[j] && y[i] == y[j]) r= true;
            else if (y[i] > y[j] && x[i] == x[j]) d=true;
            else if (y[i] < y[j] && x[i] == x[j]) u= true;
        }
        if(u && r&& d && l) count++;
    }
    cout<<count;
    return 0;
}