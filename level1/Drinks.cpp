#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    double sum=0.0;
    cin>>n;
    int ar[n];
    LOOP(i,0,n){
        cin>>ar[i];
        sum+=ar[i];
    }
    cout << fixed << setprecision(12) << sum/n << endl;
    return 0;
}