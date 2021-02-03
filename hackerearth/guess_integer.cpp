/*Shubham and Vaibhav are playing a game of integers in which Shubham chooses an integer in his mind(can be any integer value) and Vaibhav had to find that integer through some guesses. 

Shubham provides N hints to Vaibhav ,each hint can be one of the below types:

Type 1: L i   (This hint  tells that Shubham's integer < i)

Type 2: R i   (This hint tells  that Shubham’s integer > i)

Now Vaibhav has to make some guesses in  order to find Shubham's integer.

Let K denotes finite number of guesses made by Vaibhav that that are sufficient enough to find Shubham's integer.

Find the minimum value of K  OR  print -1 if  K is not finite.

In Some cases hints provided by Shubham can mislead Vaibhav, i.e. there can be a case in which Vaibhav is unable to guess the integer using hints provided by Shubham. In these cases  print -1 as output. ( Look at sample test case for more clarity.)

NOTE : Correct guess should be counted in K, as this whole game is to find the integer chosen by Shubham.The game will end when Vaibhav's guess is same as Shubham's integer.
Constraints:

1<= t<=10

1<=N<=10^5

-10^10<= i <=10^10
INPUT:

1) First line contains t denoting the number of test cases.

2) First line of each test case contains N denoting number of hints.

3) Next N lines of each test case denotes N hints.
Output:

Find the minimum value of K  OR  print -1  if  K is not finite or Vaibhav is unable to find the integer using N hints.
SAMPLE INPUT

2
2
L 50
R 10
2
L 1
R 0

SAMPLE OUTPUT

39
-1

Time Limit: 1.0 sec(s) for each input file.
Memory Limit: 256 MB
Source Limit: 1024 KB 
*/

//Code: 
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int mn = INT_MAX;
		int mx = INT_MIN;
		for(int i = 0; i<n; i++){
			char c;
			int x;
			cin>>c>>x;

			if(c == 'L'){
				mn = min(mn, x);
			}else{
				mx = max(mx, x);
			}
		}
		if(mn < mx || mn == mx + 1 || mn == INT_MAX || mx == INT_MIN){
				cout<<"-1"<<endl;
			}else{
				cout<<mn - mx - 1<<endl;  
			}
	}
}



