#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, flag=0, a[10000], x;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            flag++;
            break;
        }
    }
    if(flag!=0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
