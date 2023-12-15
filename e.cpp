#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;

    int n = x.size();

    if(n%2==0 && x[0]!=x[n-1]) cout << "Yes";
    else if(n%2==1 && x[0]==x[n-1]) cout << "Yes";
    else cout << "No";

    return 0;
}
