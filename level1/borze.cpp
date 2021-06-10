#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i <= b; i++)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,ans={};
    cin>>s;
    REP(i,0,s.size()){
        if(s[i] == '-' && s[i+1] == '.'){
            ans.push_back('1');
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-'){
            ans.push_back('2');
            i++;
        }else if(s[i] == '.'){
            ans.push_back('0');
        }
    }
    cout<<ans;
    return 0;
}