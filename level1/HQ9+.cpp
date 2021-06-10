#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int flag=0;
    LOOP(i,0,s.size()){
        if(s[i] == 'H' || s[i] == 'Q' || s[i]== '9' ){
            cout<<"YES";
            flag=1;
            break;
        } 
    }
    if(flag==0){
        cout<<"NO";
    }
    return 0;
}