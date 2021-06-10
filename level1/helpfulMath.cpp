#include <bits/stdc++.h>
using namespace std;
#define LOOP(i, a, b) for (int i = a; i < b; i++)

/*int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0,i; 
    LOOP(i,0,s.size()){
        if(s[i]=='1'){
            c1++;
        }else if(s[i] == '2'){
            c2++;
        }else if(s[i]== '3'){
            c3++;
        }
    }
   // cout<<c1<<c2<<c3<<"\n";
    for (i = 0; i < c1; i++)
    {
        cout << '1';
        if ((c2 == 0 && c3 == 0) && i == c1 - 1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for (i = 0; i < c2; i++)
    {
        cout << '2';
        if (i == c2 - 1 && c3 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for (i = 0; i < c3; i++)
    {
        cout << '3';
        if (i == c3 - 1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
        return 0;
    }*/

int main()
{
    string s;
    char a[100];
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            a[j] = s[i];
            j++;
        }
    }
    sort(a, a + j);
    for (int i = 0; i < j; i++)
    {
        if (i == j - 1)
            cout << a[i] << endl;
        else
            cout << a[i] << "+";
    }
    return 0;
}