#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("special.inp", "r", stdin);
    freopen("special.out", "w", stdout);
    long n,a[100000];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    cout<< a[1]+a[2]+a[0];
    return 0;
}