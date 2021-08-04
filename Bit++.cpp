#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c(0);
    cin >> n;

    string oper;
    while (n--)
    {
        cin >> oper;
        if (oper == "++X" || oper == "X++")
        {
            c++;
        }
        else if (oper == "--X" || oper == "X--")
        {
            c--;
        }
    }
    cout << c << "\n";
    return 0;
}
