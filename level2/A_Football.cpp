#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x,0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int,int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll>	vl;
typedef vector<pl>	vpl;
typedef vector<vi>	vvi;
typedef vector<vl>	vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int max1(int a,int b){
return a>b?a:b;
}
int min1(int a,int b){
return a<b?a:b;
}
int SetBit (int n, int x) { return n | (1 << x);}
int ClearBit (int n, int x) { return n & ~(1 << x);}
int ToggleBit (int n, int x) { return n ^ (1 << x);}
bool CheckBit (int n, int x) { return (bool)(n & (1 << x));}
int mpow(int base, int exp);
const int mod = 1'000'000'007;
const int N = 3e5, M = N;


void solve() {
    int i,j=1,n=0,sum=1;
    string s;
    cin>>s;
    for(i=1;i<s.size();i++){
       if(s[i] == s[i-1]){
           sum++;
           if(sum ==7){
               cout<<"YES";
               return;
           }
       }else{
           sum=1;
       }
    }
    
    cout<<"NO";
  
   
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    while(t--) {
    solve();
    }
    return 0;
}


int mpow(int base, int exp) {
base %= mod;
int result = 1;
while (exp > 0) {
if (exp & 1) result = ((ll)result * base) % mod;
base = ((ll)base * base) % mod;
exp >>= 1;
}
return result;
}