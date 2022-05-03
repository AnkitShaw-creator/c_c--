#include<iostream>

using namespace std;


int main(){
    int T;
    cin >>T;
    while(T--){
        int N, a=0,b=0;
        cin >> N;
        int x[100];

        for (int i = 0; i < N;i++){
            cin >> x[i];
            if(x[i]%2==0)
                a++;
            if(x[i]%2!=0)
                b++;
        }

        if(a>0){
            if(b%2==0){
                cout >> 1 >> endl;
            }
            else{
                cout >> 2 >> endl;
            }
        }
        else if(a==0){
            if(b%2==0 || b==1){
                cout << "1" << endl;
            }
            else{
                cout << "2" << endl;
            }
        }
    }
    return 0;
}