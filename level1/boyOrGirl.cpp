#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int ar[27]={0};
    int sum=0;
    LOOP(i,0,s.size()){
        int x= s[i] - 96;
        if (ar[x] == 0)
        {
            ar[x]++;
        }
    }
    LOOP(i,1,27){
        if(ar[i]==1){
            sum++;
        }
    }
    if(sum%2==0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    return 0;
}
/*
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int l = s.length();
    int ans = 0;
    for (int i = 1; i < l; i++)
    {
        if (s[i] != s[i - 1])
            ans++;
    }
    //    cout<<s<<endl;
    //    cout<<ans<<endl;
    if (ans & 1)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
*/

/*int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    if (s.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}*/