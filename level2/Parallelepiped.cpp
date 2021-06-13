#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s1,s2,s3;
    int a=0,b=0,c=0;
    cin>>s1>>s2>>s3;
    a= sqrt(s1*s3/s2);
    b= sqrt(s1*s2/s3);
    c= sqrt(s2*s3/s1);
    cout<<4*(a+b+c);
    return 0;
}