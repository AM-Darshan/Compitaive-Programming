#include <bits/stdc++.h>
using namespace std;
#define LOOP(i,a,b) for (int i=a;i<b;i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[3][3];
    int temp[3][3];
    LOOP(i,0,3){
        LOOP(j,0,3){
            temp[i][j]= 1;
            cin>>a[i][j];
        }
    }
    LOOP(i, 0, 3)
    {
        LOOP(j, 0, 3)
        {
            if(a[i][j]%2 == 1){
                temp[i][j]= !temp[i][j];
                if(i+1 < 3){
                temp[i+1][j]= !temp[i+1][j];
                }
                if(j+1 <3){
                temp[i][j+1]= !temp[i][j+1];
                }
                if(i-1>=0){
                temp[i-1][j] = !temp[i-1][j];
                }
                if(j-1 >= 0){
                temp[i][j-1] = !temp[i][j-1];
                }
            }  
        }
    }
    LOOP(i, 0, 3)
    {
        LOOP(j, 0, 3)
        {
            cout << temp[i][j];
        }
        cout << "\n";
    }
    return 0;

}