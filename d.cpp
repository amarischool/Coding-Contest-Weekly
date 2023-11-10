#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s, a, b, t1, t2;
    cin >> s >> a >> b >> t1 >> t2;

    double tortoise = s/b;
    double hare = s/a;

    if(hare>t1)hare+=t2;

    if(hare<tortoise)cout<<"Hare"<<endl;
    else cout<<"Tortoise"<<endl;

    return 0;
}
