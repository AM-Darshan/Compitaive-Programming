#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int f,sum=0,count=0;
    LOOP(i,0,n){
        cin>>f;
        sum+=f;
    }
    LOOP(i,1,6){
        if( (sum+i)%(n+1) !=1){
            count++;
        }
    }
    cout<<count;
    return 0;
}