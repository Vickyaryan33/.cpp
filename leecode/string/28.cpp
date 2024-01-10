1.find the string in other string
class Solution {
public:
    int strStr(string ha, string needle) {
       return ha.find(needle);
    }
};
//find opertaion important in string   s1.find(s2)   i.e s1 string me s2 ko find kro
2.class Solution {
public:
    int strStr(string haystack , string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();
        if(n1 < n2){
            return -1;
        }
        for(int i = 0; i < n1-n2+1; i++ ){
       if(haystack.substr(i,n2) == needle){
           return i;
       }

        }
        return -1;
        
    }
};
//note-substring(index , size ) it is important in string  
3.
class Solution {
public:
    int strStr(string ha, string needle) {
        int n=ha.length();
        int m=needle.length();
        int i=0;
        for(int i=0;i<n;i++){
           if(ha[i]==needle[0]){
           int store=i;
           int j=0;
           while(j<m){
               if(ha[store]==needle[j]){
                   store++;
                   j++;
               }else break;
           }
           if(j==m) return i;


           } 
        }
        return -1;
    }
};
