#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
        if (2 * k + 1 > n)
        {
            cout << "NO\n";
            continue;
        }
 
        string a = "", b = "";
        for (int i = 0; i < k; i++)
        {
            a += s[i];
        }
        for (int i = n - 1; i >= n - k; i--)
        {
            b += s[i];
        }
        if (a == b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}