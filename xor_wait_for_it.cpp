#include<bits/stdc++.h>

using namespace std;

#define ll long long int
// WRONG


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll l, r, c;
        cin >> l >> r;
        if(l%2==0 && r%2==0)
            c = (r-l)/2;
        else
            c =(r-l)/2+1;

        if(c%2 == 0){
            cout << "EVEN" << "\n";
        }
        else{
            cout << "ODD" << "\n";
        }
    }
}