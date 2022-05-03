#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int l;
        string s;
        cin >> l;
        cin >> s;

        if(l%2 == 0){
            for (int i = 0; i < l;i+=2){
                swap(s[i], s[i + 1]);
            }
        }
        else{
            for (int i = 0; i < l - 1;i+=2){
                swap(s[i], s[i + 1]);
            }
        }

        for (int i = 0; i < l;i++){
            s[i] = 'a' + 'z' - s[i];
        }
        cout << s << endl;
    }
}