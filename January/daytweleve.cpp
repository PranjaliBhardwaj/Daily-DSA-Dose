//You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

//Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

class Solution {
public:
bool  isvalid(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'  || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        return true;
    }
    else{
        return false;
    }
}

    bool halvesAreAlike(string s) {
        int n = s.size();
        int i = 0;
        int cnt = 0 ; 

        while(i<n/2){
            if(isvalid(s[i]))
            {
                cnt++;
            }
            i++;
        }
        i = n/2;
        while(i<n){
            if(isvalid(s[i]))
            {
                cnt--;
            }
            i++;
        }
        if(cnt == 0)return true;
        else{
            return false;
        }

    }
};
