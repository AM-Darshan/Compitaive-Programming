#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    int x=0;
    LOOP(i,0,n){
        cin>>s;
        if(s == "X++" || s == "++X"){
            x++;
        }else if(s == "X--" || s == "--X"){
            x--;
        }
    }
    cout<<x;
    return 0;
}