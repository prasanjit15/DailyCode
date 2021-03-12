#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;
        int u,v;
        cin>>u>>v;
        int a[n];
        cin>>a[0];
        int td=0;
        int oned=0;
        for (int i = 1; i < n; i++)
        {
            cin>>a[i];
            if(abs(a[i]-a[i-1])>=2)
            {
                td=1;
            }
            else if (abs(a[i] - a[i - 1]) == 1)
            {
                oned = 1;
            }
        }
        int ans=0;

        if (td==1)
        {
            cout<<0<<"\n";
            continue;
        }

        if(oned==1)
        {
            cout<<min(u,v)<<"\n";
            continue;
        }
        
        cout<<min(u+v,v+v)<<"\n";

    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}