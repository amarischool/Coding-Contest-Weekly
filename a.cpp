#include<iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    bool m=false, e=false, o=false, w=false;
    for(int i=0; i<x.size(); i++)
    {
        if(!m && x[i]=='M')m=true;
        else if(m && !e && x[i]=='E')e=true;
        else if(m && e && !o && x[i]=='O')o=true;
        else if(m && e && o && !w && x[i]=='W')w=true;
    }
    if(m && e && o && w)cout<<"YES";
    else cout<<"NO";

    return 0;
}
