#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int e, k;
        cin >> e >> k;
        int i = 0;
        while (e > k)
        {
            e = (int)e / k;
            cout << e << endl;
            i++;
        }
            //cout << i << endl;
    }
    
    return 0;
}