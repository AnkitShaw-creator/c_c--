#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

void solve(){
    int n, k, c=0;
    cin >> n >>k;
    int a[n];

    for(ll i=0;i< n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<n;i++){
        int x = a[i];
        int *l = lower_bound(a, a+n, a[i]);

        if(l == (a+n) || *l != x)
            continue;
        
        int *h = upper_bound(l, a+n, x);

        if( h-l != 1){
            c=1;
            break;
        }
        else{
            continue;
        }
    }

    if(c==1){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }    
}