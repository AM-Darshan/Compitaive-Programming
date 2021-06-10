#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1= s1+s2;
    sort(s1.begin(),s1.end());
    sort(s3.begin(), s3.end());
    if(s1.compare(s3) ==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}