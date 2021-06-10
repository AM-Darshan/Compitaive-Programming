#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    int count=0;
    cin>>n>>s;
    LOOP(i,0,s.size()-1){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}