#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;
# define ll long long int

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        string s;
        cin >> n;
        cin >> s;

        auto c = count(s.begin(), s.end(), "1");
        cout << (c*(c+1))/2 << endl;

    }    
}