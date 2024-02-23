#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int c = a^b;

    if(a+b>c && a+c>b && b+c>a) cout << "Yes";
    else cout << "No";

    return 0;
}
