    #include <bits/stdc++.h>
     
    #define int long long
     
    using namespace std;
     
    void solve()
    {
    	int n,q;
    	cin >> n >> q;
    	std::vector<int> v(n);
    	int one = 0, zero = 0;
    	for(int i =0;i < n;i++){
    		cin >> v[i];
    		if(v[i] == 1)
    			one++;
    		else
    			zero++;
    	}
    	for(int i =0 ;i < q;i++)
    	{
    		int k;cin >> k;
    		if(k == 2)
    		{
    			int h;cin >> h;
    			if(h <= one)
    				cout << 1 << endl;
    			else
    				cout << 0 << endl;
    		}
    		else
    		{
    			int h;cin >> h;
    			if(v[h-1] == 1)
    			{
    				one--;zero++;
    				v[h-1] = 0;
    			}
    			else
    			{
    				one++;zero--;
    				v[h-1] = 1;
    			}
    		}
    	}
    }
     
    int32_t main() {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
      ios::sync_with_stdio(false);
      cin.tie(0);
     
      //int tt;cin >> tt;while(tt--)
        solve();
     
      return 0;
    }