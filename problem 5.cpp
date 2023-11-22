#include<bits/stdc++.h>
using namespace std;
int main()
{
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string num;
    cin >> num;
    for(int i=0; i<num.size(); i++)
    {
        int z = num[i]-'0';
        string s = words[z];
        if(i==0)s[0]=s[0]-'a'+'A';
        cout << s;
    }
    return 0;
}
