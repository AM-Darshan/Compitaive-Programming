#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i <= b; i++)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=0,t=0;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t!=0){
        REP(i,0,s.size()-1){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
        t--;
    }

    cout<<s;
    return 0;
}