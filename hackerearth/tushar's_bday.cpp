/*Tushar and Shubham are best friends and Tushar loves integer arrays, so on Tushar’s birthday Shubham gifted him an array of N integers. Now Tushar wants to find the count of even xored subarrays. Help Tushar to find the count of these subarrays.

NOTE : 2 subarrays are considered to be different if they have different starting loaction or different ending location.

Even Xored Subarray is defined as a contiguous subarray such that if we take bitwise xor of all the elements it comes out to be even. ( Bitwise Xor operation ).

e.g. For Array  A = [ 2 , 4  ,7 ]

 Subarray of A ,  S =  [2 , 4] 

Xor of S = (2 ^ 4) = 6 which is even.

Hence S is a Even xored subarray.

 
Constraints:

1 <= t <= 10

1 <= N <= 100000

1<= A[i] <= 10000000

 
INPUT :

1) First line contains t denoting the number of test cases.

2) First line of each test case denotes N (number of integers in the array)..

3) Second line of each test case contains N spaced integers.

 
OUTPUT:

For each test case print the count of even xored subarrays in the given array in seperate line.

 
SAMPLE INPUT

1
4
1 2 3 4

SAMPLE OUTPUT

4

Explanation

Subarrays that are having even xor-> {2} , {4} , {1,2,3} , {1,2,3,4}
Time Limit: 1.0 sec(s) for each input file.
Memory Limit: 256 MB
Source Limit: 1024 KB
*/

    #include "bits/stdc++.h"
    using namespace std;
     
    #define int long long
    #define endl '\n'
     
    signed main() {
        ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
        int tc; cin >> tc;
        while (tc--) {
            int n; cin >> n;
            int ev = 0, od = 0, ans = 0;
            for (int i = 0, x, xr = 0; i < n; i++) {
                cin >> x;
                xr ^= x;
                if (xr & 1) {
                    ans += od++;
                } else {
                    ans += ev++;
                }
            }
            ans += ev;
            cout << ans << endl;
        }
    }
