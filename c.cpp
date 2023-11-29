#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int y[n], a[n], b[n];

    for(int i=0; i<n; i++)cin >> y[i];
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=0; i<n; i++)cin >> b[i];

    bool flag = true;
    for(int i=0; i<n; i++)
    {
        if(y[i]+a[i]>2023 && b[i]!=0)continue;
        else if(y[i]+a[i]<=2023 && b[i]==0)continue;
        else
        {
            flag = false;
            break;
        }
    }
    if(flag)cout<<"No";
    else cout<<"Yes";

    return 0;
}
