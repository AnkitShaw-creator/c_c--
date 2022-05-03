#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int w1, w2, x1, x2, m;

        cin >> w1 >> w2 >> x1 >> x2 >> m;

        int d = w2 - w1;
        int min = x1 * m;
        int max = x2 * m;

        if(d<min || d>max){
            cout << 0 << endl;
        }
        else{
            if(d >= min && d<= max)
                cout << 1 << endl;
        }
    }
    return 0;
}