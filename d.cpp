#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    double N = log2(n);
    if(N == int(N))cout << "Yes";
    else cout << "No";

    return 0;
}
