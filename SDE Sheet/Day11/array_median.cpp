//Find the median of two sorted arrays

#include<iostream>

using namespace std;

double m2(int a, int b){
    return ((a+b)/2.0);
}

double m3(int a, int b, int c){
    return ((a+b+c) - max(a, max(b, c)) - min(a, min(b, c)));
}

double m4(int a, int b, int c, int d){
    int maxi = max(a, max(b, max(c, d)));
    int mini = min(a, min(b, min(c, d)));

    return ((a+b+c) - maxi - mini)/2.0;
}
