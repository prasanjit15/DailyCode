    #include <bits/stdc++.h>

    using namespace std;

    int main ()

    {
        string str;
        int countwords = 0, i;
        int countletter = 0;

        cout << "Enter a string : ";
        getline(cin, str);

        for (i = 0; str[i] != '\0';i++){
            if (str[i] == ' ')
                countwords++;    
        }

        for(int i = 0; i<str.length(); i++){
            countletter++;
        }

        cout << "Number of words in the string are: " << countwords + 1<<endl;
        cout << "Number of letter: " << countletter << endl;
 
        return 0;
    }