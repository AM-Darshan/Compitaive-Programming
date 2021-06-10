#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,n1,n2,n3,count=0;
    cin>>n;
    LOOP(i,0,n){
        cin>>n1>>n2>>n3;
        if(n1+n2+n3 >= 2){
            count++;
        }
    }
    cout<<count;
    return 0;
}