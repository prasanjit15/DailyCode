#include <iostream>
#include <queue>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
 
#define ll long long
#define INF 0x3f3f3f3f;
 
map<int, int>mp;
 
const int MAX = 5;
bool check(int a, int b, int c, int d) {
    if (mp[a] && mp[b] && mp[c] && mp[d]){ 
        return true;
    }
    return false;
}
int main() {
    mp[1] = 1;
    mp[2] = 5;
    mp[0] = 10;
    mp[5] = 2;
    mp[8] = 8;
    map<int, int>ans;
    ans[1] = 1;
    ans[2] = 5;
    ans[0] = 0;
    ans[5] = 2;
    ans[8] = 8;
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        int n, m;
        scanf("%d:%d",&n, &m);
        bool f = true;
        while (f) {
            if (m >= y) {
                m = 0;
                n++;
            }
            if (n >= x) {
                n = 0;
            }
            int a,b,c,d;
            a = n / 10;
            b = n % 10;
            c = m / 10;
            d = m % 10;
            if(check(a, b, c, d) && ((ans[d] * 10 + ans[c]) <x) && ((ans[b] * 10 + ans[a]) < y)) {
                f = false;
                printf("%d%d:%d%d\n", a, b, c, d);
            }else{
                m++;
            }
        }
    }
 
	return 0;
}