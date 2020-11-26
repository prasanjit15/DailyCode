//Beginner Problem --> ATM
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    int withdrawAmt = 0;
    cin>>withdrawAmt;

    int initialBal = 0;
    cin>>initialBal;

    if(withdrawAmt < initialBal - 0.50 && withdrawAmt % 5 == 0){
        initialBal = initialBal - withdrawAmt - 0.50;

    cout<<fixed<<setprecision(2)<<initialBal;
    
    return 0;
}