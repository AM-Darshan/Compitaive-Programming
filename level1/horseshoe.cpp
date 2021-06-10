#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int, greater<int>> s1;
    int count=0,n=0;
    LOOP(i,0,4){
        cin>>n;
        if(s1.count(n)){
            count++;
        }else{
            s1.insert(n);
        }
    }
    cout<<count;
    return 0;
}