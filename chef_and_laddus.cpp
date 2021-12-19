# include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(int argc, char const *argv[]){

    ll t;
    cin >> t;
    while(t--){
        ll n,k,i,min;
        ll s[n];
        for (i = 0; i < n; i++){
            cin >> s[i];
        }
        sort(s,s+n);
        min = s[k]-s[0];
        for(i=0; i<n-k; i++){
            if(min > s[i+k]-s[i])
                min = s[i+k]-s[i];
        }
        
        cout << min << "\n";
        
    }

}
