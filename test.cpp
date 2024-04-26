#include <bits/stdc++.h>
using namespace std;
#define name "cau1"
int main(){

    freopen(name".inp", "r", stdin);
    freopen(name".out", "w", stdout);
    long long n,m,k,res=1;
    cin >> n>>m>>k;
    for(int i=n; i<=m; i++) res= ((res%k)*(i%k))%k;
    cout<< res;
    
    
    return 0;
}