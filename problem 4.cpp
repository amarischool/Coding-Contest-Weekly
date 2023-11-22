#include<bits/stdc++.h>
using namespace std;
int main()
{
    string user;
    cin >> user;
    bool b[26]={false};
    for(int i=0; i<26; i++)
    {
        int c = user[i]-'a';
        b[c]=true;
    }
    int c=0;
    for(int i=0; i<26; i++)
    {
        if(b[i])c++;
    }
    if(c%2) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}
