#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int y, a=0,b=0,c=0,d=0;
    cin>>y;
    while(true){
        y++;
        a= (y/1000);
        b= (y/100)%10;
        c= (y/10)%10;
        d= y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){ 
            break;
        }
    }
    cout<<y;
    return 0;
}