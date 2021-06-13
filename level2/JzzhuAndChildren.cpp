#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int max1(int a,int b){
    return a>b? a: b;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,last=0;
    double ch,max=0;
    cin>>n>>m;
    LOOP(i,1,n+1){
        cin>>ch;
        if( ceil(ch/m)>=max){
            last=i;
            max= ceil(ch/m);
        }
    }
    cout<<last;
    return 0;
}
