#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int digits = ceil(log10(n+1));
    int div = pow(10, digits-1);

    if(n%div==0)cout<<"Yes";
    else cout<<"No";

    return 0;
}
