    #include <bits/stdc++.h>
    typedef long long int ll;
    const unsigned int MOD = 1000000007;
     
    using namespace std;
     
    int main()
    {
        /*ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
     
        int t;
        cin >> t;
     
        for (int tt = 0; tt < t; tt++)
        {
            int n, k;
            cin >> n >> k;
     
            unordered_map<int, int> mp;
            int uni = 0;
            int ma = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                ma = max(ma, x);
                mp[x]++;
                if (mp[x] == 1)
                {
                    uni++;
                }
            }
            int me = INT_MAX;
            for (int i = 0; i < ma + 1; i++)
            {
                if (!mp[i])
                {
                    me = i;
                    break;
                }
            }
            if (me < ma && k != 0)
            {
                int avg = ((me + ma + 1) / 2);
                mp[avg]++;
                if (mp[avg] == 1)
                {
                    uni++;
                }
            }
            else if (me > ma && k != 0)
            {
                uni += k;
            }
            cout << uni << "\n";
        }
    /*#ifndef ONLINE_JUDGE
        cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif*/
        return 0;
    }