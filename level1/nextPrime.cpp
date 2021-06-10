#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    bool prime[m + 1];
    int flag=0;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= m; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= m; i += p)
                prime[i] = false;
        }
    }
    LOOP(i,n+1,m+1){
        if(prime[i] == true){
            flag=i;
            break;
        }
    }
    if(flag ==m){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
