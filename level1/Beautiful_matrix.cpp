#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0,num;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            cin>>num;
            if(num ==1){
                ans= abs(i-3)+abs(j-3);
            }
        }
    }
    cout<<ans;

    return 0;
}