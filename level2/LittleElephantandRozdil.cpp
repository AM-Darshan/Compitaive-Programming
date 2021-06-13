#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    int min_dis(1000000001), min_ind=0, count=1;
    cin >>n;
    LOOP(i,1,n+1){
        cin>>k;
        if(k < min_dis){
            min_dis= k;
            min_ind= i;
            count=1;
        }
        else if(k == min_dis){
            count++;
        }
    }
    if(count ==1){
        cout<<min_ind;
    }else{
        cout<<"Still Rozdil";
    }
    return 0;
}