#include<iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    bool m=false, e=false, o=false, w=false;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='M')m=true;
        else if(m && x[i]=='E')e=true;
        else if(e && x[i]=='O')o=true;
        else if(o && x[i]=='W')w=true;
    }
    if(m && e && o && w)cout<<"YES";
    else cout<<"NO";

    return 0;
}
