1.aabbaa is palidrome   but aabbc is not a palidrome
2.Note:- isalnum( )  its is a alpha numeric function  which check charracter and number
3. tolower means convert all char in lower case
4. toupper() means convert char in upper case
5. code:-class Solution {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.length()-1;
       if(s.length()<=1) return true;
       else{
while(start<end) {
if(!isalnum(s[start])){
    start++;
    continue;
}
if(!isalnum(s[end])){
    end--;
    continue;
}
if(tolower(s[start])!=tolower(s[end])) return false;
else{
    start++;
    end--;
}
}
       }

       return true;

    }
};
