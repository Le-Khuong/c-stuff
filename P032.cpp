#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s;
    for (int i=0; i < s.length();i++){
        t+=s[i];
        cout<< t<<endl;
    }
    for (int i=0; i < s.length();i++){
        cout << t<< endl; 
        t.erase(t.length()-1,1);
    }


}