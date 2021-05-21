#include <iostream>

using namespace std;

int main(){
    int n,t;
    cin>>n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>t;
        sum+=t;
    }

    int sum1;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        cin>>t;
        sum1+=t;
    }

    int sum2 = 0;
    for (int i = 0; i < n-2; i++)
    {
        /* code */
        cin>>t;
        sum2+=t;
    }

    cout<<sum - sum1<<endl;
    cout<<sum1 - sum2<<endl;

    return 0;
}