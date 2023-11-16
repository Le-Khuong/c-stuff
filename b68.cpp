#include <bits/stdc++.h>
using namespace std;
int main(){
   //freopen("bai69.inp","r",stdin);
  //freopen("bai69.out","w",stdout);
    long a,b,c;
    cin >> a>>b >>c;
    if(a==b || a==c || b==c) cout <<"BAU LAI"; else 
        if (a>b&&a>c) cout << "BACH"; else
        if (b>c&&b>a) cout << "HUY"; else 
        if (c>b&&c>a) cout << "TOAN";
    return 0;
}
