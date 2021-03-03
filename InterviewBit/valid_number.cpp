bool checkValid(string s) {

    bool digit = false;                     // to check if digits are present
    int i=0, j = s.length()-1;

    while(i<j && s[i] == ' ')        i++;   // skip trailing whitespaces
    while(j>=0 && s[j] == ' ')       j--;   // skip trailing whitespaces
    while(i <= j) {
        char it = s[i++];
        if(it>='0'&& it<='9') 
            digit = true;
        else if(it=='-' || it=='+' || it=='.' || it == 'e')
            continue;
        else    
            return false; // cases with any non-numeric(including intermediate whitespaces)
    }
    return digit;
}

int Solution::isNumber(const string A) {

    if(count(A.begin(), A.end(), '.')>1)    return 0; // cases like "1.2.3"
    if(count(A.begin(), A.end(), 'e')>1)    return 0; // cases like "1e2e3"
    int ePos = A.find('e');
    int dotPos = A.find('.');

    if(dotPos != string::npos) //find returns npos if not found, npos basically "until the last", here I refer it as the last position
        if(dotPos == A.length()-1)
            return 0;                                 // cases like "3."
        else if(ePos != string::npos && dotPos >= ePos-1)
            return 0;                                 // cases like "4.e3", "2e9.3"
    return checkValid(A);
}