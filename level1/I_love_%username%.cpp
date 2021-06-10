#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,points;
    cin>>n>>points;
    int max(points),min=(points),amazing=0;
    LOOP(i,1,n){
        cin>>points;
        if(max < points){
            max= points;
            amazing++;
        }
        if(min > points){
            min= points;
            amazing++;
        }
    }
    cout<<amazing;
    return 0;
}