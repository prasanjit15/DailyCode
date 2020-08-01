/*Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".

Otherwise, we define that this word doesn't use capitals in a right way.*/


class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        int flag = 0;
        if(word[0] >= 'A' && word[0] <= 'Z'){
            for(int i = 1; i< word.size(); i++){
                if(word[i] >= 'A' && word[i] <= 'Z')
                  count++;
                if(word[i] >= 'a' && word[i] <= 'z')
                  flag++;
            } 
            
        }else if(word[0]>= 'a' && word[0]<='z'){
            for(int i = 1; i< word.size(); i++){
                if(word[i] >= 'a' && word[i] <= 'z')
                  count++;          
        }    
    }
            
        if(count == word.size() - 1)
            return true;
        else if(flag == word.size() - 1)
            return true;
        else 
            return false;
    }
};
