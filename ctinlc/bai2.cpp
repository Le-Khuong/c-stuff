#include <bits/stdc++.h>
using namespace std;
#define name "test"
int main(){
    //freopen(name".inp", "r", stdin);
    //freopen(name".out", "w", stdout);
    
    long n,k,Max=0;
    cin >>n;
    for(int i=0; i<n; i++){
        long temp;
        cin >> temp;
        Max = max(temp, Max);
        cout<< Max<<" ";        
    }
    
    
    return 0;
}