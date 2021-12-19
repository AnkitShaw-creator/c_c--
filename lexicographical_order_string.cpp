// Find a string in lexicographic order which is in between given two strings

#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int i;
    for(i = s.length() - 1; i >= 0;i--){
        if (s[i] != 'z'){
            s[i]++;
            break;
        }
        else{
            s[i] = 'a';
        }
    }
    if(s != t)
        cout << s << endl;
    else
        cout << "-1" << endl;
    return 0;
}