//Print the amount received after each month for a principle amount at 11% interest for a respective amount of period

#include <bits/stdc++.h>

using namespace std;


int main(){
    cout<<"Enter the princpal amount: ";
    double pri;
    cin>>pri;

    cout<<"Enter the no. of years money to be deposited: ";
    int yr;
    cin>>yr;

    cout<<"Enter the % rate of interest: ";
    double interest;
    cin>>interest;

    interest = interest/100;

    double value = pri; 
    int i = 0;

    for(int i = 0; i<=yr; i++){
        cout<<"Balance after year "<<i<<": "<<fixed<<setprecision(2)<<value<<endl;
        value = value + (interest * value);
    }

    return 0;
}