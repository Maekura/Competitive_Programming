#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a!=b && a!=c && b==c) cout << "Yes" << endl;
    else if(b!=a && b!=c && a==c) cout << "Yes" << endl;
    else if(c!=a && c!=b && a==b) cout << "Yes" << endl;
    else cout << "No" << endl;
}