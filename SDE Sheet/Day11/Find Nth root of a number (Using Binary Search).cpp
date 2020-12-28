#include<bits/stdc++.h>

using namespace std;

void calc(double a, int b){
    double low = 0;
    double high = 0;

    if(a>=0 && a <= 1){
        low = a;
        high = 1;
    }else
    {
        low = 1;
        high = a;
    }
    double acc = 0.00001;

    double guess = (low+high)/2;
    while(abs((pow(guess, b)) - a) >= acc){
        if(pow(guess, b) > a){
            high = guess;
        }else{
            low = guess;
        }
        guess = (low+high)/2;
    }

    cout<<"Answer: "<<setprecision(16)<<guess<<endl;
}

int main(){
    cout<<"Enter the num: ";
    double x;
    cin>>x;

    cout<<"Enter the expo: ";
    int y;
    cin>>y;

    calc(x, y);
    return 0;
}
