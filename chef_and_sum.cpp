#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
#define ll long long int 


string sum(ll b[], ll c, ll d){
    ll i=0,j= c-1, x;
    sort(b,b+c);
    while(i<j){
        x = b[i]+b[j];
        if(x== d)
            return "Yes";
        else if(x < d)
            i++;
        else if(x > d)
            j--;
    }
    
    return "No";
}


int main()
{
    ll t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        cout << sum(a, n, k) << endl;
    }

    return 0;
}
