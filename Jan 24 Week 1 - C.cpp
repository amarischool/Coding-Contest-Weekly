#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    if (x==y) cout << "Draw";
    else if (x=="Rock" && y=="Paper") cout << "Player2";
    else if (x=="Rock" && y=="Scissor") cout << "Player1";
    else if (x=="Paper" && y=="Scissor") cout << "Player2";
    else if (x=="Paper" && y=="Rock") cout << "Player1";
    else if (x=="Scissor" && y=="Rock") cout << "Player2";
    else if (x=="Scissor" && y=="Paper") cout << "Player1";

    return 0;
}
