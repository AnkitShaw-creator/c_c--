#include<iostream>
#include<algorithm>

using namespace std;


int main(){

    int T;
    cin >> T;

    while(T--){
        int a, b;

        cin >> a >> b;
        float optA = (100 % 10) * a;
        float optB = (100 % 20) * b;

        if(optA == optB)
            cout << "ANY" << endl;
        if(optA >optB)
            cout << "FIRST" << endl;
        if(optB>optA)
            cout << "SECOND" << endl;
    }
    return 0;
}