#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n;
    cin>>n;
    int count=0;
    LOOP(i,0,n.size()){
        if(n[i]=='4' || n[i]== '7'){
            count++;
        }
    }
    if(count ==4  || count ==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}