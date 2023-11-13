#include<iostream>
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    if(m>n)cout<<"No";
    else if(m%k==0)cout<<"Yes";
    else cout<<"No";

    return 0;
}
