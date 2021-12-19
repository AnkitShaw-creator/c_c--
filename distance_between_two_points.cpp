#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    double x1, y1, x2, y2, d;
    cout << "Enter the points in order x1, y1, x2, y2" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    d = sqrt((x2 * x2 - x1 * x1) + (y2 * y2 - y1 * y1));
    cout << d << endl;
    return 0;
}
