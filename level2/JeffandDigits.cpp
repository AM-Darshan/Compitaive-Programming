#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    int c0=0,c5=0;
    cin>>n;
    LOOP(i,0,n){
        cin>>k;
        if(k== 0){
            c0++;
        }else{
            c5++;
        }
    }
    c5= floor(c5/9)*9;
    if(c0==0 ){
        cout<<-1;
    }else if(c5==0){
        cout<<0;
    }else{
       for(int i=0;i<c5;i++){
           cout<<5;
       }
       for(int i=0;i<c0;i++){
           cout<<0;
       }

    }

    return 0;
}