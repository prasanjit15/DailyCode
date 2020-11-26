#include <bits/stdc++.h>


using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    int totalin;
    cin>>totalin;

    int c = 0;
    
    vector<int> storage;

    while(c <= testcase){
        int k = 0;
        int h = 0;
        for(int i = 0; i<totalin; i++){
            int z = 0;
            cin>>z;
            storage.push_back(z);
        }

        cin>>h;

        k = storage[h];

        sort(storage.begin(), storage.end());

        for(int i = 0; i<storage.size(); i++){
            if(k == storage[i])
                cout<<i+1<<endl;
        }

        c++;
    }
}