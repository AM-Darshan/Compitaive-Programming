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
    int i,j=0,n,m=0;
    cin>>n;
    vector<int> a1, a2, a3;
    fo(i,n){
        cin>>m;
        if(m<0){
            a1.push_back(m);
        }else if(m>0){
            a2.push_back(m);
        }else{
            a3.push_back(m);
        }
    }
    if(a2.size() ==0 ){
        fo(i,2){
            a2.push_back(a1.back()), a1.pop_back();
        }
    }
    if(a1.size()%2==0){
        a3.push_back(a1.back());
        a1.pop_back();
    }
    cout<<a1.size()<<" ";
    fo(i,a1.size())
        cout<<a1[i]<<" ";
    
    cout<<"\n"<<a2.size()<<" ";
    fo(i,a2.size()){
        cout<<a2[i]<<" ";
    }
    cout<<"\n"<<a3.size();
    fo(i,a3.size()){
        cout<<" "<<a3[i];
    }
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    //cin>>t;
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