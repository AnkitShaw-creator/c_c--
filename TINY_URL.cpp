# include<bits/stdc++.h>

using namespace std;

// Encodes a URL to a shortened URL.
string encode(string longUrl){
}

// Decodes a shortened URL to its original URL.
string decode(string shortUrl){
}

int main(){

    int choice;
    cout << "Enter 1 to encode, 2 to decode" << endl;
    cin >> choice;

    string url;
    cout << "Enter URL" << endl;
    cin >> url;

    if(choice == 1)
        cout << encode(url) << "\n";
    
    if(choice == 2 )
        cout << decode(url) << "\n";

    return 0;
}