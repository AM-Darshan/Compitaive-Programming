#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int pages,ans=0, j=0;
    cin>>pages;
    int a[7];
    LOOP(i,0,7){
        cin>>a[i];
    }
    ans= a[0];
    while(ans < pages){
        j++;
        j%=7;
        ans+=a[j];
    }
    cout<<j+1;
    return 0;
}